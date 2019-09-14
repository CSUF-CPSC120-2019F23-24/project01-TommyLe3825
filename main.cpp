// Name: Tommy Le
// This program calculates and displays business expenses.

#include <iostream>

int main()
{
  std::string business_location;
  int trip_days; //amount of days we use be on your trip
  double hotel_expenses, meal_expenses, total_all;


  std::cout << "Welcome to the Business Trip Tracker! \n";
  std::cout << "\nWhat is the business trip location? "; //location of trip
  std::cin >> business_location;

  std::cout << "How many days will the trip take? "; //input # of days on trip
  std::cin >> trip_days;

  std::cout << "What is the total hotel expense? "; //cost of hotel
  std::cin >> hotel_expenses;

  std::cout << "What is the total meal expense? "; //total meal cost
  std::cin >> meal_expenses;

  total_all =  hotel_expenses + meal_expenses; //calculate the total cost of hotel and meal

  std::cout << "\nLocation\tDays\tHotel\tMeal\tTotal\n";
  std::cout << business_location << '\t' << trip_days << '\t' << hotel_expenses << '\t' << meal_expenses << '\t' << total_all << '\n';


  return 0;
}
