#pragma once
#include <string>
#include <vector>
using std::string;
using std::vector;


class Order;


class Customer {
    public:
        //P represnts that this is a parameter
        Customer(int id, const string &name, int locationDistance, int maxOrders);
        const string &getName() const;
        int getId() const;
        int getCustomerDistance() const;
        int getMaxOrders() const; //Returns maxOrders
        int getNumOrders() const; //Returns num of orders the customer has made so far
        bool canMakeOrder() const; //Returns true if the customer didn't reach max orders
        const vector<int> &getOrdersIds() const;
        int addOrder(int orderId); //return OrderId if order was added successfully, -1 otherwise

        virtual Customer *clone() const = 0; // Return a copy of the customer

        
    private:
        const int id;
        const string name;
        const int locationDistance;
        const int maxOrders;
        vector<int> ordersId;
        const int ordersMade;
};


class SoldierCustomer: public Customer {
    public:
        //P represnts that this is a parameter
        SoldierCustomer(int idP, string nameP, int locationDistanceP, int maxOrdersP);
        SoldierCustomer *clone() const override;
    
    private:
        
};

class CivilianCustomer: public Customer {
    public:
        //P represnts that this is a parameter
        CivilianCustomer(int idP, string nameP, int locationDistanceP, int maxOrdersP);
        CivilianCustomer *clone() const override;
    
    private:
        
};