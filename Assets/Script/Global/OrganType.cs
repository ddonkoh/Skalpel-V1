public enum OrganType {
    // CS = Circulatory System
    CS_heart = 100,
    CS_veins = 101,
    CS_arteries = 102,
    CS_capillaries = 103,
    // DS = Digestive System
    DS_stomach = 200,
    DS_smallIntestines = 201,
    DS_largeIntestines = 202,
    DS_rectum = 203,
    // RS = Respiratory System
    RS_Lungs = 300,
    RS_diaphragm = 301,
    RS_gasExchange = 302,
    RS_oxygenDissociationCurve = 303,
    RS_bicarbonateBufferingSystem = 304,
    RS_breathingPace = 305,
    RS_specialCells = 306,
    // NS = Nervous System
    NS_brain = 400,
    NS_synapticTransmission = 401,
    NS_neurotransmitters = 402,
    NS_centralNervousSystem = 403,
    NS_peripheralNervousSystem = 404,
    NS_glialCells = 405,
    NS_neurons = 406,
    // ES = Excretory System
    ES_kidney = 500,
    ES_ureters = 501,
    ES_urinarybladder = 502,
    ES_urethra = 503,
}

public static class OrganTypeClass{
    public static string GetName(OrganType rEnum) {
        string organName = "";
        string enumName = rEnum.ToString();
        for (int i = 0; i < enumName.Length; i++) {
            if (i == 3) {
                organName = enumName[3].ToString().ToUpper();
            } else if (i > 3) { 
                char newString = enumName[i];
                if(newString>= 'A' && newString <= 'Z') {
                    organName += " ";
                }
                organName += enumName[i];
            }
        }
        return organName;
    }
}
