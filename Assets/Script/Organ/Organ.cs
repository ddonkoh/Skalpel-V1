using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;

public enum OrganStage { idle, movingToFront, autoRotation, manipulating, movingToOrigin }
public class Organ : MonoBehaviour {
    public OrganStage organStage;
    public OrganType organType;
    float rotationSpeed = 50f;
    //
    Vector3 originPoint;
    Vector3 frontPoint;
    //
    Vector3 curPos;
    Quaternion curRot;
    Vector3 curScale;

    ObjectManipulator om;
    float counter = 0f;

    public void Start() {
        RecordInitialPosition();
        om = GetComponent<ObjectManipulator>();
    }
    public void RecordInitialPosition() {
        originPoint = transform.localPosition;
        Transform frontPointTransform = FindObjectOfType<OrganFrontPoint>().transform;
        frontPoint = transform.parent.InverseTransformPoint(frontPointTransform.position);
    }

    public void Update() {
        if (organStage == OrganStage.idle) {
            // do nothing
        } else if (organStage == OrganStage.movingToFront) {
            MovingToward(frontPoint, out bool isMovementCompleted);
            if (isMovementCompleted) {
                organStage = OrganStage.autoRotation;
                om.enabled = true;
            }
        } else if (organStage == OrganStage.autoRotation) {
            transform.Rotate(transform.up * Time.deltaTime * rotationSpeed);
        } else if (organStage == OrganStage.manipulating) {
            // do nothing
        } else if (organStage == OrganStage.movingToOrigin) {
            MovingToward(originPoint, out bool isMovementCompleted);
            if (isMovementCompleted) {
                organStage = OrganStage.idle;
            }
        }
    }
    public void MovingToward(Vector3 rTgtPos, out bool oIsCompleted) {
        counter += Time.deltaTime;
        transform.localPosition = Vector3.Lerp(curPos, rTgtPos, counter);
        transform.localRotation = Quaternion.Lerp(curRot, Quaternion.identity, counter);
        transform.localScale = Vector3.Lerp(curScale, Vector3.one, counter);
        //
        oIsCompleted = counter >= 1f;
        if (counter >= 1f) {
            counter = 0f;
        }
    }


    public void TravelToFront() {
        if (organStage != OrganStage.idle)
            return;
        //
        RecordCurrentTransformForNewTravel();
        organStage = OrganStage.movingToFront;
    }
    public void TravelToOrigin() {
        if (organStage != OrganStage.autoRotation && organStage != OrganStage.manipulating)
            return;
        RecordCurrentTransformForNewTravel();
        om.enabled = false;
        organStage = OrganStage.movingToOrigin;
    }
    public void RecordCurrentTransformForNewTravel() {
        curPos = transform.localPosition;
        curRot = transform.localRotation;
        curScale = transform.localScale;
        counter = 0f;
    }

    public void OnManipulationStart() {
        if (organStage != OrganStage.autoRotation)
            return;
        organStage = OrganStage.manipulating;
    }

    public bool IsBusy() {
        return organStage == OrganStage.movingToFront || organStage == OrganStage.movingToOrigin;
    }
}
