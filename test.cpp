#include <iostream> //Tiek pievienots imports iostream, lai varçtu pieòemt lietotâja ievadîto mainîgo
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
	int score = 0; //Punktu skaits pareiziem atbildçtiem jautâjumiem
    char answer1; /*Pareizâ atbilde */
    char answer2; /*Pareizâ atbilde */
    char answer3; /*Pareizâ atbilde */
    char answer4; /*Pareizâ atbilde */
    char answer5; /*Pareizâ atbilde */
    char answer6; /*Pareizâ atbilde */
    char answer7; /*Pareizâ atbilde */
    char answer8; /*Pareizâ atbilde */
    char answer9; /*Pareizâ atbilde */
    char answer10; /*Pareizâ atbilde */
    string jaut1 = "Kas ir sazarojuma konstrukcijas?"; //1. Jautâjums
    string jaut2 = "Ko sazarojuma iekavas raksta ieksha?"; //2. Jautâjums
    string jaut3 = "Ja if/switch nosacijums ir patiess, kas notiek?"; //3. Jautâjums
    string jaut4 = "Cik strukturetaja if sazarojuma konstrukcija pastav sazarojumu konstrukciju?"; //4. Jautâjums
    string jaut5 = "Ja if/switch nosacijums ir nepatiess, kas notiek?"; //5. Jautâjums
    string jaut6 = "Kursh no sazarojuma konstrukcijam nedarbojas C++?"; //6. Jautâjums
    string jaut7 = "Cik mainigie drikst but if/switch nosacijuma?"; //7. Jautâjums
    string jaut8 = "Kur sazarojuma konstrukcija tiek izverteta?"; //8. Jautâjums
    string jaut9 = "Vai sazarojuma konstrukcija tikai sastav no if strukturas?"; //9. Jautâjums
    string jaut10 = "Kursh no sazarojumu konstrukcijam ir visertakais?"; //10. Jautâjums 
    
    cout << endl; //Pârliek uz nâkamo rindkopu
    cout << jaut1 << endl << endl; //Pievieno jautâjumu, pârliek uz nâkamo rindkopu
    cout << "A) Nosacijuma apgalvojums" << endl; //Atbilþu variants
    cout << "B) Tekstdatnes izvade" << endl; //Atbilþu variants
    cout << "C) Simbolu virkne" << endl; //Atbilþu variants
    cout << "D) Divdimensiju masivs" << endl; //Atbilþu variants
    cin >> answer1; //Ievada atbildi
        if(answer1 == 'a' || answer1 == 'A'){ //Ja atbilde ir vienâda ar simbolu 'a' vai 'A', tad pieskaita punktu
    	score++;
}
	cout << endl; //Pârliek uz nâkamo rindkopu
    cout << jaut2 << endl; //Pievieno jautâjumu, pârliek uz nâkamo rindkopu
    cout << "A) Vestuli" << endl; //Atbilþu variants
    cout << "B) Boolean nosacijumu" << endl; //Atbilþu variants
    cout << "C) Simbolu virkni" << endl; //Atbilþu variants
    cout << "D) Programmas nosaukumu" << endl; //Atbilþu variants
    cin >> answer2; //Ievada atbildi
        if(answer2 == 'b' || answer2 == 'B'){ //Ja atbilde ir vienâda ar simbolu 'b' vai 'B', tad pieskaita punktu
    	score++;
}
	cout << endl; //Pârliek uz nâkamo rindkopu
    cout << jaut3 << endl; //Pievieno jautâjumu, pârliek uz nâkamo rindkopu
    cout << "A) Programma aizveras" << endl; //Atbilþu variants
    cout << "B) Izpildas noteikta programmas rinda arpus if/switch nosacijuma" << endl; //Atbilþu variants
    cout << "C) Programma izdzesas" << endl; //Atbilþu variants
    cout << "D) Izpildas noteikta programmas rinda ieks if/switch nosacijuma" << endl; //Atbilþu variants
    cin >> answer3; //Ievada atbildi
        if(answer3 == 'd' || answer3 == 'D'){ //Ja atbilde ir vienâda ar simbolu 'd' vai 'D', tad pieskaita punktu
    	score++;
}
	cout << endl; //Pârliek uz nâkamo rindkopu
    cout << jaut4 << endl; //Pievieno jautâjumu, pârliek uz nâkamo rindkopu
    cout << "A) 2" << endl; //Atbilþu variants
    cout << "B) 3" << endl; //Atbilþu variants
    cout << "C) 4" << endl; //Atbilþu variants
    cout << "D) 5" << endl; //Atbilþu variants
    cin >> answer4; //Ievada atbildi
        if(answer4 == 'b' || answer4 == 'B'){ //Ja atbilde ir vienâda ar simbolu 'b' vai 'B', tad pieskaita punktu
    	score++;
}
}
