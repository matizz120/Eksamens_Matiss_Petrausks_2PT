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
	cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut5 << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) Programma apturas" << endl; //Atbil�u variants
    cout << "B) Izpildas noteikta programmas rinda ieks if/switch nosacijuma" << endl; //Atbil�u variants
    cout << "C) Tostermaizes izcepjas" << endl; //Atbil�u variants
    cout << "D) Izpildas noteikta programmas rinda arpus if/switch nosacijuma" << endl; //Atbil�u variants
    cin >> answer5; //Ievada atbildi
        if(answer5 == 'd' || answer5 == 'D'){ //Ja atbilde ir vien�da ar simbolu 'd' vai 'D', tad pieskaita punktu
    	score++;
}
	cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut6 << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) If sazarojums" << endl; //Atbil�u variants
    cout << "B) Else if sazarojums" << endl; //Atbil�u variants
    cout << "C) Aritmetisks if sazarojums" << endl; //Atbil�u variants
    cout << "D) Switch Case sazarojums" << endl; //Atbil�u variants
    cin >> answer6; //Ievada atbildi
    if(answer6 == 'c' || answer6 == 'C'){ //Ja atbilde ir vien�da ar simbolu 'c' vai 'C', tad pieskaita punktu
    	score++;
}
	cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut7 << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) 2" << endl; //Atbil�u variants
    cout << "B) 4" << endl; //Atbil�u variants
    cout << "C) Vairak pa 10" << endl; //Atbil�u variants
    cout << "D) 10" << endl; //Atbil�u variants
    cin >> answer7; //Ievada atbildi
    if(answer7 == 'c' || answer7 == 'C'){ //Ja atbilde ir vien�da ar simbolu 'c' vai 'C', tad pieskaita punktu
    	score++;
}
	cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut8 << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) Arpus nosacijuma iekavam" << endl; //Atbil�u variants
    cout << "B) Ieks nosacijuma iekavam" << endl; //Atbil�u variants
    cout << "C) Cikla nosacijuma" << endl; //Atbil�u variants
    cout << "D) Mainigaja" << endl; //Atbil�u variants
    cin >> answer8; //Ievada atbildi
        if(answer8 == 'b' || answer8 == 'B'){ //Ja atbilde ir vien�da ar simbolu 'b' vai 'B', tad pieskaita punktu
    	score++;
}
	cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut9 << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) Ne" << endl; //Atbil�u variants
    cout << "B) Ja" << endl; //Atbil�u variants
    cout << "C) Varbut" << endl; //Atbil�u variants
    cout << "D) Nezinu" << endl; //Atbil�u variants
    cin >> answer9; //Ievada atbildi
        if(answer9 == 'a' || answer9 == 'A'){ //Ja atbilde ir vien�da ar simbolu 'a' vai 'A', tad pieskaita punktu
    	score++;
}

	cout << endl; //P�rliek uz n�kamo rindkopu
    cout << jaut10 << endl; //Pievieno jaut�jumu, p�rliek uz n�kamo rindkopu
    cout << "A) If Else" << endl; //Atbil�u variants
    cout << "B) If" << endl; //Atbil�u variants
    cout << "C) Switch Case" << endl; //Atbil�u variants
    cout << "D) Else" << endl; //Atbil�u variants
    cin >> answer10; //Ievada atbildi
    if(answer10 == 'c' || answer10 == 'C'){ //Ja atbilde ir vien�da ar simbolu 'c' vai 'C', tad pieskaita punktu
    	score++;
}
	cout << endl;    
	cout << "Jus atbildejat pareizi uz " << score << " jautajumiem no 10!" << endl;
	cout << "Nepareizi atbildeti jautajumi - " << endl;
	
if(answer1 == 'a' || answer1 == 'A'){ //Ja atbilde ir pareiza, tad neko neizvada
	cout<< endl;
}else if (answer1 != 'a' || answer1 != 'A'){ //Ja atbilde ir nepareiza, tad izvada nepareizi atbildetu jautajumu
	cout<< jaut1 << endl;
}
if(answer2 == 'b' || answer2 == 'B'){ //Ja atbilde ir pareiza, tad neko neizvada
	cout<< endl;
}else if (answer2 != 'b' || answer2 != 'B'){ //Ja atbilde ir nepareiza, tad izvada nepareizi atbildetu jautajumu
	cout<< jaut2 << endl;
}
if(answer3 == 'd' || answer3 == 'D'){ //Ja atbilde ir pareiza, tad neko neizvada
	cout<< endl;
}else if (answer3 != 'd' || answer3 != 'D'){ //Ja atbilde ir nepareiza, tad izvada nepareizi atbildetu jautajumu
	cout<< jaut3 << endl;
}
if(answer4 == 'b' || answer4 == 'B'){ //Ja atbilde ir pareiza, tad neko neizvada
	cout<< endl;
}else if (answer4 != 'b' || answer4 != 'B'){ //Ja atbilde ir nepareiza, tad izvada nepareizi atbildetu jautajumu
	cout<< jaut4 << endl;
}
if(answer5 == 'd' || answer5 == 'D'){ //Ja atbilde ir pareiza, tad neko neizvada
	cout<< endl;
}else if (answer5 != 'd' || answer5 != 'D'){ //Ja atbilde ir nepareiza, tad izvada nepareizi atbildetu jautajumu
	cout<< jaut5 << endl;
}
if(answer6 == 'c' || answer6 == 'C'){ //Ja atbilde ir pareiza, tad neko neizvada
	cout<< endl;
}else if (answer6 != 'c' || answer6 != 'C'){ //Ja atbilde ir nepareiza, tad izvada nepareizi atbildetu jautajumu
	cout<< jaut6 << endl;
}
if(answer7 == 'c' || answer7 == 'C'){ //Ja atbilde ir pareiza, tad neko neizvada
	cout<< endl;
}else if (answer7 != 'c' || answer7 != 'C'){ //Ja atbilde ir nepareiza, tad izvada nepareizi atbildetu jautajumu
	cout<< jaut7 << endl;
}
}
