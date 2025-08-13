class Solution {
public:
    // Fonction qui vérifie si deux rectangles se chevauchent
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        
        // On calcule la borne inférieure en x (le côté gauche du chevauchement)
        // C'est le plus grand des deux x-min (rec1[0] et rec2[0])
        int borneInf_x = (rec1[0] > rec2[0]) ? rec1[0] : rec2[0];
        
        // On calcule la borne supérieure en x (le côté droit du chevauchement)
        // C'est le plus petit des deux x-max (rec1[2] et rec2[2])
        int borneSup_x = (rec1[2] < rec2[2]) ? rec1[2] : rec2[2];
        
        // Largeur de la zone de chevauchement en x
        int delt_x = borneSup_x - borneInf_x;

        // Même logique pour l’axe y
        // borne inférieure en y (plus grand y-min)
        int borneInf_y = (rec1[1] > rec2[1]) ? rec1[1] : rec2[1];
        
        // borne supérieure en y (plus petit y-max)
        int borneSup_y = (rec1[3] < rec2[3]) ? rec1[3] : rec2[3];
        
        // Hauteur de la zone de chevauchement en y
        int delt_y = borneSup_y - borneInf_y;

        // Si la largeur ou la hauteur du chevauchement est négative ou nulle,
        // cela signifie qu'il n'y a pas de recouvrement (ou juste un contact)
        if (delt_x <= 0 || delt_y <= 0)
        {
            return false; // Pas de chevauchement
        }
        else
        {
            return true; // Chevauchement détecté
        }
    }
};
