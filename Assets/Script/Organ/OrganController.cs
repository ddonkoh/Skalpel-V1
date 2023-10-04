using UnityEngine;

public class OrganController : MonoBehaviour {
    public Organ[] allOrgan;

    Organ currentOrgan;
    public void ActivateOrgan(OrganType rOrganType) {
        if (currentOrgan != null) {
            if (rOrganType == currentOrgan.organType || currentOrgan.IsBusy())
                return;

            if (currentOrgan.organType != rOrganType)
                DeactivateCurrentOrgan();
        }
        //
        foreach (Organ organ in allOrgan) {
            if (organ.organType == rOrganType) {
                organ.TravelToFront();
                currentOrgan = organ;
                break;
            }
        }
    }
    public void DeactivateCurrentOrgan() {
        if (currentOrgan == null)
            return;
        //
        currentOrgan.TravelToOrigin();
        currentOrgan = null;
    }

    [ContextMenu("Get Variable")]
    void GetVariable() {
        allOrgan = FindObjectsOfType<Organ>();
    }
}
