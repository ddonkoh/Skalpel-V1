using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CopyBoxCollider : MonoBehaviour
{
    public BoxCollider targetBox;

    [ContextMenu("Copy Box Collider")]
    void CopyBoxColliderValue() {
        BoxCollider curBox = GetComponent<BoxCollider>();
        /* Vector3 tgtSize = targetBox.transform.rotation * targetBox.size ;
         Vector3 tgtCenter = targetBox.transform.rotation * targetBox.center;
         curBox.size = new Vector3(tgtSize.x, tgtSize.z, tgtSize.y);
         curBox.center = new Vector3(-tgtCenter.x, tgtCenter.z, tgtCenter.y);*/
        Vector3 tgtSize = targetBox.size;
        Vector3 tgtCenter = targetBox.center;
        curBox.size = new Vector3(tgtSize.x, tgtSize.z, tgtSize.y);
        curBox.center = new Vector3(-tgtCenter.x, tgtCenter.z, tgtCenter.y);
    }
}
