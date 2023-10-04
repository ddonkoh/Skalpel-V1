using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OriginAnchor : MonoBehaviour {
    public Transform organControllerRoot;
    Vector3 lastPosition;
    // Start is called before the first frame update
    void Start() {
        enabled = false;
    }

    // Update is called once per frame
    void Update() {
        if (transform.position == lastPosition)
            return;
        organControllerRoot.position = transform.position;
        lastPosition = transform.position;
    }

    public void OnManipulationStart() {
        enabled = true;
    }
    public void OnManipulationEnd() {
        enabled = false;
    }
}
