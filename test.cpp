#include <iostream> //Tiek pievienots imports iostream, lai var�tu pie�emt lietot�ja ievad�to main�go
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
	int score = 0; //Punktu skaits pareiziem atbild�tiem jaut�jumiem
    char answer1; /*Pareiz� atbilde */
    char answer2; /*Pareiz� atbilde */
    char answer3; /*Pareiz� atbilde */
    char answer4; /*Pareiz� atbilde */
    char answer5; /*Pareiz� atbilde */
    char answer6; /*Pareiz� atbilde */
    char answer7; /*Pareiz� atbilde */
    char answer8; /*Pareiz� atbilde */
    char answer9; /*Pareiz� atbilde */
    char answer10; /*Pareiz� atbilde */
    string jaut1 = "Kas ir sazarojuma konstrukcijas?"; //1. Jaut�jums
    string jaut2 = "Ko sazarojuma iekavas raksta ieksha?"; //2. Jaut�jums
    string jaut3 = "Ja if/switch nosacijums ir patiess, kas notiek?"; //3. Jaut�jums
    string jaut4 = "Cik strukturetaja if sazarojuma konstrukcija pastav sazarojumu konstrukciju?"; //4. Jaut�jums
    string jaut5 = "Ja if/switch nosacijums ir nepatiess, kas notiek?"; //5. Jaut�jums
    string jaut6 = "Kursh no sazarojuma konstrukcijam nedarbojas C++?"; //6. Jaut�jums
    string jaut7 = "Cik mainigie drikst but if/switch nosacijuma?"; //7. Jaut�jums
    string jaut8 = "Kur sazarojuma konstrukcija tiek izverteta?"; //8. Jaut�jums
    string jaut9 = "Vai sazarojuma konstrukcija tikai sastav no if strukturas?"; //9. Jaut�jums
    string jaut10 = "Kursh no sazarojumu konstrukcijam ir visertakais?"; //10. Jaut�jums 
    
    cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut1 << endl << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) Nosacijuma apgalvojums" << endl; //Atbil�u variants
    cout << "B) Tekstdatnes izvade" << endl; //Atbil�u variants
    cout << "C) Simbolu virkne" << endl; //Atbil�u variants
    cout << "D) Divdimensiju masivs" << endl; //Atbil�u variants
    cin >> answer1; //Ievada atbildi
        if(answer1 == 'a' || answer1 == 'A'){ //Ja atbilde ir vien�da ar simbolu 'a' vai 'A', tad pieskaita punktu
    	score++;
}
	cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut2 << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) Vestuli" << endl; //Atbil�u variants
    cout << "B) Boolean nosacijumu" << endl; //Atbil�u variants
    cout << "C) Simbolu virkni" << endl; //Atbil�u variants
    cout << "D) Programmas nosaukumu" << endl; //Atbil�u variants
    cin >> answer2; //Ievada atbildi
        if(answer2 == 'b' || answer2 == 'B'){ //Ja atbilde ir vien�da ar simbolu 'b' vai 'B', tad pieskaita punktu
    	score++;
}
	cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut3 << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) Programma aizveras" << endl; //Atbil�u variants
    cout << "B) Izpildas noteikta programmas rinda arpus if/switch nosacijuma" << endl; //Atbil�u variants
    cout << "C) Programma izdzesas" << endl; //Atbil�u variants
    cout << "D) Izpildas noteikta programmas rinda ieks if/switch nosacijuma" << endl; //Atbil�u variants
    cin >> answer3; //Ievada atbildi
        if(answer3 == 'd' || answer3 == 'D'){ //Ja atbilde ir vien�da ar simbolu 'd' vai 'D', tad pieskaita punktu
    	score++;
}
	cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut4 << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) 2" << endl; //Atbil�u variants
    cout << "B) 3" << endl; //Atbil�u variants
    cout << "C) 4" << endl; //Atbil�u variants
    cout << "D) 5" << endl; //Atbil�u variants
    cin >> answer4; //Ievada atbildi
        if(answer4 == 'b' || answer4 == 'B'){ //Ja atbilde ir vien�da ar simbolu 'b' vai 'B', tad pieskaita punktu
    	score++;
}
}
