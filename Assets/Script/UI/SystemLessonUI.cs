using UnityEngine;

public class SystemLessonUI : MonoBehaviour {
    public GameObject organButtonPrefab;
    public OrganButtonUI[] allOrganButton;

    [Header("Heading Child Root")]
    public Transform tCollapseRoot;
    public Transform tExpandRoot;

    [Header("Heading Title Button")]
    public TouchButton btnExpand;
    public TouchButton btnCollapse;

    UIManager uiManager;

    // Start is called before the first frame update
    public void Start() {
        uiManager = FindObjectOfType<UIManager>();
        TurnOnSystem();
        AddButtonListener();
    }
    public void AddButtonListener() {
        btnCollapse.OnTouch.AddListener(Collapse);
        btnExpand.OnTouch.AddListener(Expand);
        foreach (OrganButtonUI obUI in allOrganButton) {
            obUI.btnOrgan.OnTouch.AddListener(delegate { ActivateOrgan(obUI.organType, obUI.btnOrgan.transform); });
        }
    }
    public void TurnOffSystem() {
        gameObject.SetActive(false);
    }
    [ContextMenu("Turn On System")]
    public void TurnOnSystem() {
        gameObject.SetActive(true);
        ToggleChildRoot(true, false);
    }
    public void TurnOnSystemWithoutChange() {
        gameObject.SetActive(true);
    }

    public void Expand() {
        ToggleChildRoot(false, true);
        uiManager.TurnOffAllSystemExcept(this);
        uiManager.PlayClickSound();
    }

    public void Collapse() {
        if (uiManager.miniOptionUI.IsOn()) {
            uiManager.miniOptionUI.PlayNoiseAnimation();
            return;
        }
        ToggleChildRoot(true, false);
        uiManager.TurnOnAllSystemExcept(this);
        uiManager.PlayClickSound();
    }

    public void ActivateOrgan(OrganType rOrganType, Transform rOrganButtontTransform) {
        uiManager.ActivateOrgan(rOrganType, rOrganButtontTransform.position);
    }

    private void ToggleChildRoot(bool rCollapseBool, bool rExpandBool) {
        tCollapseRoot.gameObject.SetActive(rCollapseBool);
        tExpandRoot.gameObject.SetActive(rExpandBool);
    }

    [ContextMenu("Create Organ Button")]
    public void CreateOrganButton() {
        Vector3 sPos = btnCollapse.transform.position + Vector3.down * 0.04f;
        Vector3 offset = Vector3.zero;
        foreach (OrganButtonUI obUI in allOrganButton) {
            // create button and set name
            GameObject newOrganButtonObject = Instantiate(organButtonPrefab, btnCollapse.transform.parent);
            newOrganButtonObject.name = obUI.organType.ToString();
            // set position of new button
            newOrganButtonObject.transform.position = sPos + offset;
            offset += Vector3.down * 0.0325f;
            // get touch button and change caption
            TouchButton newTouchButton = newOrganButtonObject.GetComponent<TouchButton>();
            newTouchButton.ChangeCaption(OrganTypeClass.GetName(obUI.organType));
            // store new button to own class variable
            obUI.btnOrgan = newTouchButton;
        }
    }
}

[System.Serializable]
public class OrganButtonUI {
    public OrganType organType;
    public TouchButton btnOrgan;
}
