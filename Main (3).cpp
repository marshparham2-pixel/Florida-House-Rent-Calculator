#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    double sizeSqFt;    // House size in square feet
    int bedrooms;       // Number of bedrooms
    string city;        // City where the user wants to rent
    char ans;           // User input for amenities (y/n)

    // Get house size from user
    cout << "Enter the house size in square feet:\n";
    cin >> sizeSqFt;

    // Get number of bedrooms
    cout << "Enter number of bedrooms:\n";
    cin >> bedrooms;

    // Get city
    cout << "Enter city that you want to rent in Florida: (Miami, Jacksonville, Orlando, Tampa)\n";
    cin >> city;

    // Ask about amenities
    bool pool = false, parking = false, gym = false, security = false;

    cout << "Do you want a pool for your house? (y/n): "<<"\n";
    cin >> ans; pool = (ans == 'y' || ans == 'Y');

    cout << "Do you want to have parking for your house? (y/n): "<<"\n";
    cin >> ans; parking = (ans == 'y' || ans == 'Y');

    cout << "Do you want a gym for your house? (y/n): "<<"\n";
    cin >> ans; gym = (ans == 'y' || ans == 'Y');

    cout << "Do you want to have security in your house? (y/n): "<<"\n";
    cin >> ans; security = (ans == 'y' || ans == 'Y');

    // City rates per square foot
    map<string, double> cityRates = {
        {"Miami", 3.5},
        {"Orlando", 2.5},
        {"Tampa", 2.0},
        {"Jacksonville", 1.8}
    };

    // Check if city is valid
    if (cityRates.find(city) == cityRates.end()) {
        cout << "You have chosen the wrong city.\n";
        return 1;
    }

    double ratePerSqFt = cityRates[city];

    // Base rent calculation (size x rate)
    double baseRent = sizeSqFt * ratePerSqFt;

    // Additional cost for extra bedrooms (more than 2)
    double extraBedroomCost = max(0, bedrooms - 2) * 150;

    // Amenities cost calculation
    double amenitiesCost = 0;
    amenitiesCost += pool ? 200 : 0;
    amenitiesCost += parking ? 50 : 0;
    amenitiesCost += gym ? 100 : 0;
    amenitiesCost += security ? 75 : 0;

    // Subtotal before discount and tax
    double subtotal = baseRent + extraBedroomCost + amenitiesCost;

    // Discount for houses with more than 3 bedrooms (10%)
    double discount = 0;
    if (bedrooms > 3) {
        discount = 0.10 * subtotal;
    }

    double afterDiscount = subtotal - discount;

    // Tax 5%
    double tax = 0.05 * afterDiscount;

    // Final estimated monthly rent
    double finalRent = afterDiscount + tax;

    // Messages about house size
    string sizeMsg = (sizeSqFt > 250) ? "That's fantastic, a big house.\n" :
                     (sizeSqFt > 100) ? "100+ square feet, that will be good for you.\n" :
                     "Under 100 square feet, it's hard to find that.\n";

    // Messages about number of bedrooms
    string bedroomMsg = (bedrooms > 4) ? "More than 4 bedrooms, wow.\n" :
                        (bedrooms > 2) ? "More than 2 bedrooms, maybe you have children.\n" :
                        "What a good number of bedrooms.\n";

    // Display basic info
    cout << sizeMsg;
    cout << bedroomMsg;
    cout << city << " is a good city.\n\n";

    // Show breakdown of rent including amenities
    cout << "Rent Breakdown:\n";
    cout << "- Base rent (size x rate): $" << baseRent << "\n";
    cout << "- Extra bedroom cost: $" << extraBedroomCost << "\n";

    cout << "- Amenities cost:\n";
    if(pool) cout << "  * Pool: +$200\n";
    if(parking) cout << "  * Parking: +$50\n";
    if(gym) cout << "  * Gym: +$100\n";
    if(security) cout << "  * Security: +$75\n";
    if(!pool && !parking && !gym && !security) cout << "  * None\n";

    cout << "- Subtotal: $" << subtotal << "\n";
    cout << "- Discount (if any): -$" << discount << "\n";
    cout << "- Tax 5%: +$" << tax << "\n";
    cout << "=> Total Cost (final estimated monthly rent): $" << finalRent << endl;

    return 0;
}
