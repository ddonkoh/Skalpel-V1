using UnityEngine;

public class UIManager : MonoBehaviour {
    public SystemLessonUI[] allSystemLessonUI;
    SystemLessonUI lasActiveSystem;
    public MiniOptionUI miniOptionUI;
    public DescriptionUI descriptionUI;

    OrganController organController;

    [Header("Sound Effect")]
    public AudioClip clickSfx;
    public AudioSource sound;

    // Start is called before the first frame update
    void Start() {
        organController = FindObjectOfType<OrganController>();
        GlobalTouch.uiManager = this;
    }

    public void ActivateOrgan(OrganType rOrganType, Vector3 rOrganButtonPos) { 
        organController.ActivateOrgan(rOrganType);
        Vector3 optionPos = rOrganButtonPos + Vector3.right * 0.17f;
        miniOptionUI.TurnOnMiniOption(optionPos, rOrganType);
        PlayClickSound();
    }
    public void BackOrganToTheOrigin() {
        organController.DeactivateCurrentOrgan();
    }
    public void PlayClickSound() {
        sound.PlayOneShot(clickSfx);
    }
    public void ShowDetailInfo(OrganType rOrganType) {
        lasActiveSystem.TurnOffSystem();
        miniOptionUI.TurnOffMiniOption();
        descriptionUI.TurnOnDescription(rOrganType);
    }
    public void HideDetailInfo() {
        lasActiveSystem.TurnOnSystemWithoutChange();
        miniOptionUI.TurnOnMiniOptionWithoutChange();
        descriptionUI.TurnOffDescription();
    }

    public void TurnOffAllSystemExcept(SystemLessonUI rException) { // in the time of expand a system
        foreach (SystemLessonUI slUI in allSystemLessonUI) {
            if (slUI == rException)
                continue;
            slUI.TurnOffSystem();
        }
        lasActiveSystem = rException;
    }

    public void TurnOnAllSystemExcept(SystemLessonUI rException) { // in the time of collpse all
        foreach (SystemLessonUI slUI in allSystemLessonUI) {
            if (slUI == rException)
                continue;
            slUI.TurnOnSystem();
        }
    }
}


