#include <iostream>
#include <string>
#include <vector>
#include "Input_Validation_Extended.h"
using namespace std;

class Budget
{
  protected:
  double monthlyPaycheck;
  double tips;
  double refund;
  double mortageRent;
  double electric;
  double gas;
  double water;
  double savings;
  double entertainment;
  double clothes;
  double shoes;
  double vendingMachine;
  double creditCard;
  double car;
  double carInsurance;
  double carMaintenance;
  double carGas;
  double schoolBooks;
  double foodGroceries;
  double foodDining;
  double cleaningSupplies;
  double personalCare;
  double charity;
  double dayCare;
  double petCare;
  double cell;
  double internet;
  double cable;
  double streamingServices;
  double amazon;
  double totalIncome;
  double totalExpenses;
  //I promise I tried making this look prettier but I just don't know how yet. Was going to try and make it work by having the user enter their Income and Expense variables by themselves that way I don't have to individually write them like above.
  /*vector<pair<string, double>> incomes = {};
  vector<pair<string, double>> expenses = {};*/
  public:
  Budget()
  {
  monthlyPaycheck = 0.0;
  tips = 0.0;
  refund = 0.0;
  mortageRent = 0.0;
  electric = 0.0;
  gas = 0.0;
  water = 0.0;
  savings = 0.0;
  entertainment = 0.0;
  clothes = 0.0;
  shoes = 0.0;
  vendingMachine = 0.0;
  creditCard = 0.0;
  car = 0.0;
  carInsurance = 0.0;
  carMaintenance = 0.0;
  carGas = 0.0;
  schoolBooks = 0.0;
  foodGroceries = 0.0;
  foodDining = 0.0;
  cleaningSupplies = 0.0;
  personalCare = 0.0;
  charity = 0.0;
  dayCare = 0.0;
  petCare = 0.0;
  cell = 0.0;
  internet = 0.0;
  cable = 0.0;
  streamingServices = 0.0;
  amazon = 0.0;
  totalIncome = 0.0;
  totalExpenses = 0.0;
  }
  void setMonthlyPaycheck(double mP) {monthlyPaycheck = mP;}
  void setTips(double t) {tips = t;}
  void setRefund(double r) {refund = r;}
  void setMortgageRent(double mR) {mortageRent = mR;}
  void setElectric(double e) {electric = e;}
  void setGas(double g) {gas = g;}
  void setWater(double w) {water = w;}
  void setSavings(double s) {savings = s;}
  void setEntertainment(double ent) {entertainment = ent;}
  void setClothes(double cl) {clothes = cl;}
  void setShoes(double s) {shoes = s;}
  void setVendingMachine(double vM) {vendingMachine = vM;}
  void setCreditCard(double cC) {creditCard = cC;}
  void setCar(double c) {car = c;}
  void setCarInsurance(double cI) {carInsurance = cI;}
  void setCarMaintenance(double cM) {carMaintenance = cM;}
  void setCarGas(double cG) {carGas = cG;}
  void setSchoolBooks(double sB) {schoolBooks = sB;}
  void setFoodGroceries(double fG) {foodGroceries = fG;}
  void setFoodDining(double fD) {foodDining = fD;}
  void setCleaningSupplies(double cS) {cleaningSupplies = cS;}
  void setPersonalCare(double pC) {personalCare = pC;}
  void setCharity(double ch) {charity = ch;}
  void setDayCare(double dC) {dayCare = dC;}
  void setPetCare(double pC) {petCare = pC;}
  void setCell(double ce) {cell = ce;}
  void setInternet(double i) {internet = i;}
  void setCable(double ca) {cable = ca;}
  void setStreamingServices(double sS) {streamingServices = sS;}
  void setAmazon(double a) {amazon = a;}
  void setTotalIncome(double tI) {totalIncome = tI;}
  void setTotalExpenses(double tE) {totalExpenses = tE;}
  //Getters
  double getMonthylPayment() {return monthlyPaycheck;}
  double getTips() {return tips;}
  double getRefund() {return refund;}
  double getMortgageRent() {return mortageRent;}
  double getElectric() {return electric;}
  double getGas() {return gas;}
  double getWater() {return water;}
  double getSavings() {return savings;}
  double getEntertainment() {return entertainment;}
  double getClothes() {return clothes;}
  double getShoes() {return shoes;}
  double getVendingMachine() {return vendingMachine;}
  double getCreditCard() {return creditCard;}
  double getCar() {return car;}
  double getCarInsurance() {return carInsurance;}
  double getCarMaintenance() {return carMaintenance;}
  double getCarGas() {return carGas;}
  double getSchoolBooks() {return schoolBooks;}
  double getFoodGroceries() {return foodGroceries;}
  double getFoodDining() {return foodDining;}
  double getCleaningSupplies() {return cleaningSupplies;}
  double getPersonalCare() {return personalCare;}
  double getCharity() {return charity;}
  double getDayCare() {return dayCare;}
  double getPetCare() {return petCare;}
  double getCell() {return cell;}
  double getInternet() {return internet;}
  double getCable() {return cable;}
  double getStreamingServices() {return streamingServices;}
  double getAmazon() {return amazon;}
  double getTotalIncome() {return monthlyPaycheck + tips + refund;}
  double getTotalExpenses() {return mortageRent + electric + gas + water + savings + entertainment + clothes + shoes + vendingMachine + creditCard + car + carInsurance + carMaintenance + carGas + schoolBooks + foodGroceries + foodDining + cleaningSupplies + personalCare + charity + dayCare + petCare + cell + internet + cable + streamingServices + amazon;}
  void setIncome()
  {
    cout << "\nEnter your monthly paycheck: ";
    monthlyPaycheck=validateDouble(monthlyPaycheck);
    cout << "Enter the Tips you recieve: ";
    tips=validateDouble(tips);
    cout << "Enter your Refund Amount: ";
    refund=validateDouble(refund);
    showValues();
    return;
  }
  void setExpenses()
  {
    cout << "Enter your Mortgage/Rent Amount: ";
    mortageRent=validateDouble(mortageRent);
    cout << "Enter your Electric Costs: ";
    electric=validateDouble(electric);
    cout << "Enter your Gas Costs: ";
    gas=validateDouble(gas);
    cout << "Enter your Water Cost: ";
    water=validateDouble(water);
    cout << "Enter what you save: ";
    savings=validateDouble(savings);
    cout << "Enter your Entertainment Costs: ";
    entertainment=validateDouble(entertainment);
    cout << "Enter your Clothes Costs: ";
    clothes=validateDouble(clothes);
    cout << "Enter your Shoes Costs: ";
    shoes=validateDouble(shoes);
    cout << "Enter your Vending Machine Costs: ";
    vendingMachine=validateDouble(vendingMachine);
    cout << "Enter your Credit Card Payments: ";
    creditCard=validateDouble(creditCard);
    cout << "Enter your Car Payments: ";
    car=validateDouble(car);
    cout << "Enter your Car Insurance costs: ";
    carInsurance=validateDouble(carInsurance);
    cout << "Enter your Car Maintenance costs: ";
    carMaintenance=validateDouble(carMaintenance);
    cout << "Enter your Car Gas Costs: ";
    carGas=validateDouble(carGas);
    cout << "Enter your School Books Cost: ";
    schoolBooks=validateDouble(schoolBooks);
    cout << "Enter your Groceries Cost: ";
    foodGroceries=validateDouble(foodGroceries);
    cout << "Enter your Dining Costs: ";
    foodDining=validateDouble(foodDining);
    cout << "Enter your Cleaning Supplies Cost: ";
    cleaningSupplies=validateDouble(cleaningSupplies);
    cout << "Enter your Personal Care Costs: ";
    personalCare=validateDouble(personalCare);
    cout << "Enter your Charity Donations: ";
    charity=validateDouble(charity);
    cout << "Enter your Day Care Costs: ";
    dayCare=validateDouble(dayCare);
    cout << "Enter your Pet Care Costs: ";
    petCare=validateDouble(petCare);
    cout << "Enter your Cell Phone Costs: ";
    cell=validateDouble(cell);
    cout << "Enter your Internet Cost: ";
    internet=validateDouble(internet);
    cout << "Enter your Cable/Satellite Costs: ";
    cable=validateDouble(cable);
    cout << "Enter your Streaming Services Costs: ";
    streamingServices=validateDouble(streamingServices);
    cout << "Enter your Amazon Costs: ";
    amazon=validateDouble(amazon);
    showValues();
    return;
  }
  void setValues()
  {
    cout << "\nEnter your monthly paycheck: ";
    monthlyPaycheck=validateDouble(monthlyPaycheck);
    cout << "Enter the Tips you recieve: ";
    tips=validateDouble(tips);
    cout << "Enter your Refund Amount: ";
    refund=validateDouble(refund);
    cout << "Enter your Mortgage/Rent Amount: ";
    mortageRent=validateDouble(mortageRent);
    cout << "Enter your Electric Costs: ";
    electric=validateDouble(electric);
    cout << "Enter your Gas Costs: ";
    gas=validateDouble(gas);
    cout << "Enter your Water Cost: ";
    water=validateDouble(water);
    cout << "Enter what you save: ";
    savings=validateDouble(savings);
    cout << "Enter your Entertainment Costs: ";
    entertainment=validateDouble(entertainment);
    cout << "Enter your Clothes Costs: ";
    clothes=validateDouble(clothes);
    cout << "Enter your Shoes Costs: ";
    shoes=validateDouble(shoes);
    cout << "Enter your Vending Machine Costs: ";
    vendingMachine=validateDouble(vendingMachine);
    cout << "Enter your Credit Card Payments: ";
    creditCard=validateDouble(creditCard);
    cout << "Enter your Car Payments: ";
    car=validateDouble(car);
    cout << "Enter your Car Insurance costs: ";
    carInsurance=validateDouble(carInsurance);
    cout << "Enter your Car Maintenance costs: ";
    carMaintenance=validateDouble(carMaintenance);
    cout << "Enter your Car Gas Costs: ";
    carGas=validateDouble(carGas);
    cout << "Enter your School Books Cost: ";
    schoolBooks=validateDouble(schoolBooks);
    cout << "Enter your Groceries Cost: ";
    foodGroceries=validateDouble(foodGroceries);
    cout << "Enter your Dining Costs: ";
    foodDining=validateDouble(foodDining);
    cout << "Enter your Cleaning Supplies Cost: ";
    cleaningSupplies=validateDouble(cleaningSupplies);
    cout << "Enter your Personal Care Costs: ";
    personalCare=validateDouble(personalCare);
    cout << "Enter your Charity Donations: ";
    charity=validateDouble(charity);
    cout << "Enter your Day Care Costs: ";
    dayCare=validateDouble(dayCare);
    cout << "Enter your Pet Care Costs: ";
    petCare=validateDouble(petCare);
    cout << "Enter your Cell Phone Costs: ";
    cell=validateDouble(cell);
    cout << "Enter your Internet Cost: ";
    internet=validateDouble(internet);
    cout << "Enter your Cable/Satellite Costs: ";
    cable=validateDouble(cable);
    cout << "Enter your Streaming Services Costs: ";
    streamingServices=validateDouble(streamingServices);
    cout << "Enter your Amazon Costs: ";
    amazon=validateDouble(amazon);
    showValues();
    
  }

  void showValues()
  {
    cout << "\n************BUDGET************" << endl;
    cout << "Paycheck: $" << getMonthylPayment() << endl;
    cout << "Tips: $" << getTips() << endl;
    cout << "Refund Amount: $" << getRefund() << endl;
    cout << "Mortgage/Rent Amount: $" << getMortgageRent() << endl;
    cout << "Electric Cost: $" << getElectric() << endl;
    cout << "Gas Cost: $" << getGas() << endl;
    cout << "Water Cost: $" << getWater() << endl;
    cout << "Savings Cost: $" << getSavings() << endl;
    cout << "Entertainment Cost: $" << getEntertainment() << endl;
    cout << "Clothes Cost: $" << getClothes() << endl;
    cout << "Shoes Cost: $" << getShoes() << endl;
    cout << "Vending Machine Costs: $" << getVendingMachine() << endl;
    cout << "Credit Card Payments: $" << getCreditCard() << endl;
    cout << "Car Payments: $" << getCar() << endl;
    cout << "Car Insurance: $" << getCarInsurance() << endl;
    cout << "Car Maintenance: $" << getCarMaintenance() << endl;
    cout << "Car Gas Costs: $" << getCarGas() << endl;
    cout << "School Books Cost: $" << getSchoolBooks() << endl;
    cout << "Groceries Cost: $" << getFoodGroceries() << endl;
    cout << "Dining Costs: $" << getFoodDining() << endl;
    cout << "Cleaning Supplies Cost: $" << getCleaningSupplies() << endl;
    cout << "Personal Care Costs: $" << getPersonalCare() << endl;
    cout << "Charity Donations: $" << getCharity() << endl;
    cout << "Day Care Costs: $" << getDayCare() << endl;
    cout << "Pet Care Costs: $" << getPetCare() << endl;
    cout << "Cell Phone Costs: $" << getCell() << endl;
    cout << "Internet Cost: $" << getInternet() << endl;
    cout << "Cable/Satellite Costs: $" << getCable() << endl;
    cout << "Streaming Services Cost: $" << getStreamingServices() << endl;
    cout << "Amazon Costs: $" << getAmazon() << endl;
    cout << "Total Income: $" << getTotalIncome() << endl;
    cout << "Total Expenses: $" << getTotalExpenses() << endl;
    cout << "What's left: $" << (getTotalIncome() - getTotalExpenses()) << endl; 

    
    
  }
};


int main() 
{
  Budget p1,p2;
  int option;
  p1.showValues();
  cout << "\nOptions:" << endl;
  cout << "1. Recreate your budget (edit the whole budget)." << endl;
  cout << "2. Edit your income." << endl;
  cout << "3. Edit your expenses." << endl;
  cout << "4. Exit." << endl;
  

  do
  {
    option=validateInt(option);
    if (option == 1)
    {
      p1.setValues();
    }
    else if (option == 2)
    {
      p1.setIncome();
    }
    else if (option == 3)
    {
      p1.setExpenses();
    }
    else
    cout << "There was an error processing your request. Terminating program." << endl;
    return 0;
  } while (option != 4);


  return 0;
}