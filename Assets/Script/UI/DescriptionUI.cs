using TMPro;
using UnityEngine;

public class DescriptionUI : MonoBehaviour
{
    public Data[] allData;
    public TextMeshPro txtCaption;
    public TextMeshPro txtDescription;
    string defaultDescription = "The project is currently under development stage. " +
        "All the information will be available, Once we have completed the project.";
    public TouchButton btnBack;

    public UIManager uiManager;
    public void Start() {
        uiManager = FindObjectOfType<UIManager>();
        btnBack.OnTouch.AddListener(Back);
    }
    public void TurnOnDescription(OrganType rOrganType) {
        txtCaption.text = OrganTypeClass.GetName(rOrganType);
        bool hasFoundDescription = false;
        foreach (Data data in allData) {
            if(data.organType == rOrganType) {
                txtDescription.text = data.description;
                hasFoundDescription = true;
                break;
            }
        }
        if (!hasFoundDescription)
            txtDescription.text = defaultDescription;

        gameObject.SetActive(true);
    }
    public void TurnOffDescription() {
        gameObject.SetActive(false);
    }
    public void Back() {
        uiManager.HideDetailInfo();
    }
}
