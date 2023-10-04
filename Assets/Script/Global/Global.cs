
using UnityEngine;


public static class GlobalTouch {
    static float lastTouchTime;
    public static UIManager uiManager;

    public static bool CanTouchNow() {
        bool canTouch = Time.time > lastTouchTime + 1f;        
        return canTouch;
    }

    public static void RecordTouchTime() {
        lastTouchTime = Time.time;
    }
}
