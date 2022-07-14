/*Napisz funkcje min_element, która przyjmuje modyfikujacy iterator poczatkowy oraz koncowy wycinka
wektora liczb ca³kowitych i zwraca modyfikujacy iterator najmniejszego elementu tego wycinka. Jezeli
takich elementów jest kilka, funkcja zwraca iterator pierwszego z nich. Jezeli taki element nie istnieje, funkcja
zwraca koncowy iterator wycinka. Napisz analogiczna funkcje min_element przyjmujaca i zwracajaca
iteratory niemodyfikujace. Funkcje powinny byc przystosowane do uzycia w przyk³adowym programie
ponizej. Funkcje nie uzywaja indeksów i korzystaja tylko z pliku nag³ówkowego vector.*/

#include <vector>
#include <iostream>

std::vector<int>::iterator min_element(std::vector<int>::iterator b, std::vector<int>::iterator e) {
	while ( b < e) {
		auto min = b;
		for (auto iterator = b; iterator < e; ++iterator){
			if(*iterator < *min){
				min = iterator;
			}
			}
		return min;
	}
	}

std::vector<int>::const_iterator min_element(std::vector<int>::const_iterator b, std::vector<int>::const_iterator e) {
 	while ( b < e) {
		auto min = b;
		for (auto iterator = b; iterator < e; ++iterator){
			if(*iterator < *min){
				min = iterator;
			}
		}
		return min;
}
}

int main() {
std::vector<int> vector {};
auto result1 = min_element(vector.begin(), vector.end());
auto result2 = min_element(vector.cbegin(), vector.cend());
std::cout << result1 - vector.begin() << " "
<< result2 - vector.cbegin() << std::endl; }
//Wykonanie Out: 2 2
