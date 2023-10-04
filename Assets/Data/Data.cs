using UnityEngine;

[CreateAssetMenu(fileName = "Data", menuName = "Skalpel/Data", order = 1)]
public class Data : ScriptableObject {
    public OrganType organType;
    [TextArea(10, 15)]
    public string description;
}