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
    
    cout << endl;
    cout << jaut1 << endl << endl;
    cout << "A) Nosacijuma apgalvojums" << endl;
    cout << "B) Tekstdatnes izvade" << endl;
    cout << "C) Simbolu virkne" << endl;
    cout << "D) Divdimensiju masivs" << endl;
    cin >> answer1;
        if(answer1 == 'a' || answer1 == 'A'){
    	score++;
}
}
