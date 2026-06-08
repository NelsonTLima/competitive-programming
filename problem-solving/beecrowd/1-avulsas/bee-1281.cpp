#include <bits/stdc++.h>

using namespace std;

int main() {

  struct Product{
    string name;
    float price;
  };

  struct Purchase{
    string name;
    int qty;
  };

  int qtyProducts;
  int qtyPurchases;
  int qtyCases;

  cin >> qtyCases;
  vector<float> bills;
  for (int i=0; i < qtyCases; i++) {

    cin >> qtyProducts;
    vector<Product> products;
    for (int j=0; j < qtyProducts; j++){
      Product product;
      string name;
      float price;

      cin >> product.name >> product.price;

      products.push_back(product);
    }

    cin >> qtyPurchases;
    vector<Purchase> purchases;
    for(int j=0; j < qtyPurchases; j++){
      Purchase purchase;
      string name;
      int qty;

      cin >> purchase.name >> purchase.qty;

      purchases.push_back(purchase);
    }

    float bill = 0;
    for (int j=0; j < purchases.size(); j++){
      for (int k=0; k < products.size(); k++){
        if (purchases[j].name == products[k].name){
          bill += purchases[j].qty * products[k].price;
        }
      }
    }
    bills.push_back(bill);
  }
  for (int i=0; i < bills.size(); i++){
    cout << fixed << setprecision(2) << "R$ " << bills[i] << endl;
  }
  return 0;
}
