using System.Collections;
using TMPro;
using UnityEngine;

public class MiniOptionUI : MonoBehaviour {
    public TextMeshPro txtCaption;
    public TouchButton btnShowInfo;
    public TouchButton btnBack;

    UIManager uiManager;
    OrganType selectedOrganType;

    public void Start() {
        uiManager = FindObjectOfType<UIManager>();
        btnShowInfo.OnTouch.AddListener(ShowInfo);
        btnBack.OnTouch.AddListener(Back);
    }
    public void TurnOnMiniOption(Vector3 rPos, OrganType rOrganType) {
        gameObject.SetActive(true);
        transform.position = rPos;
        selectedOrganType = rOrganType;
        txtCaption.text = OrganTypeClass.GetName(selectedOrganType).ToString();
    }
    public void TurnOnMiniOptionWithoutChange() {
        gameObject.SetActive(true);
    }
    public void TurnOffMiniOption() {
        gameObject.SetActive(false);
    }
    public bool IsOn() {
        return gameObject.activeSelf;
    }

    public void ShowInfo() {
        uiManager.ShowDetailInfo(selectedOrganType);
    }
    public void Back() {
        TurnOffMiniOption();
        uiManager.BackOrganToTheOrigin();
    }

    [ContextMenu("Noise")]
    public void PlayNoiseAnimation() {
        if (isAnimating)
            return;
        StartCoroutine(NoiseAnimation());
    }
    bool isAnimating;
    IEnumerator NoiseAnimation() {
        isAnimating = true;
        for (int i = 0; i < 24; i++) {
            transform.localScale = Vector3.one + Vector3.one * 0.03f * Mathf.PingPong(i, 6);
            yield return new WaitForSeconds(0.02f);
        }
        isAnimating = false;
    }
}
