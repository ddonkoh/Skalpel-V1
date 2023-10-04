using TMPro;
using UnityEngine;
using UnityEngine.Events;


public class TouchButton : MonoBehaviour {
    public TextMeshPro txtCaption;
    public UnityEvent OnTouch;

    public void OnTouchInteractable() {
        if (!GlobalTouch.CanTouchNow())
            return;

        OnTouch.Invoke();
        GlobalTouch.uiManager.PlayClickSound();
        GlobalTouch.RecordTouchTime();
    }

    public void ChangeCaption(string rString) {
        txtCaption.text = rString;
    }
}
