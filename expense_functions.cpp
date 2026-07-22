#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Expense{
private:
    float amt;
    string category;
    string description;
    
public:
    
    Expense(float amt, string category, string description){
        this -> amt = amt;
        this -> category = category;
        this -> description = description;
    }
    
    float get_amt(){
        return amt;
    }
    
    string get_category(){
        return category;
    }
    
    string get_description(){
        return description;
    }
    
    void set_amt(float amt){
        this -> amt = amt;
    }
    
    void set_category(string category){
        this -> category = category;
    }
    
    void set_description(string description){
        this -> description = description;
    }
    
};

class ExpenseTracker{

private:
    vector <Expense> e;
    
public:

    void add_expense(float amt, string category, string description){
        Expense obj(amt,category,description);
        e.push_back(obj);
    }
    
    void delete_expense(){
        
        if(e.empty()){
            cout << "Nothing Stored!!\n";
            return;
        }
        
        print_expense();
        
        int index = -1;
        cout << "Enter the index number to delete: ";
        cin >> index;
        
        
        if(index == -1 || index >= e.size()){
            cout << "Invalid Entry, try again!!\n";
        }
        else{
            e.erase(e.begin()+index-1);
            cout << "Expense Removed!\n";
        }
    }
    
    void find_max(){
        
        float num = -1;
        
        for(int i=0;i<e.size();i++){
            if(e[i].get_amt() > num){
                num = e[i].get_amt();
            }
        }
        
        pair < float, pair<string,string>> max;
        
        for(int i=0;i<e.size();i++){
            if(e[i].get_amt()==num){
                max.first = e[i].get_amt();
                max.second.first = e[i].get_category();
                max.second.second = e[i].get_description();
            }
        }
        
        cout << "Most expensive purchase, Description: " << max.second.second << ", Category: " << max.second.first << ", Amount: " << max.first << endl;
    }
    
    void cal_total(){
        float val = 0.0;
        for(int i=0;i<e.size();i++){
            val += e[i].get_amt();
        }
        
        cout << "Total Expense: " << val << endl;
    }
    
    void modify_amt(){
        print_expense();
        int index;
        float amt;
        cout << "Enter the index to modify: ";
        cin >> index;
        cout << "Enter the new amount: ";
        cin >> amt;
        
        e[index-1].set_amt(amt);
        cout << "New amount updated!!\n";
    }
    
    void modify_category(){
        print_expense();
        int index;
        string cat;
        cout << "Enter the index to modify: ";
        cin >> index;
        cout << "Enter the new category: ";
        cin >> ws;
        getline(cin,cat);
        
        e[index-1].set_category(cat);
        cout << "New Category updated!!\n";
    }
    
    void modify_description(){
        print_expense();
        int index;
        string des;
        cout << "Enter the index to modify: ";
        cin >> index;
        cout << "Enter the new category: ";
        cin >> ws;
        getline(cin,des);
        
        e[index-1].set_description(des);
        cout << "New Description updated!!\n";
    }
    
    
    void print_expense(){
        cout << "<--------------Current Expenses-------------->\n";
        for(int i=0;i<e.size();i++){
            cout << "Expense " << i+1 << endl;
            cout << "Amount: " << e[i].get_amt() << endl;
            cout << "Category: " << e[i].get_category() << endl;
            cout << "Description: " << e[i].get_description() << endl;
            cout << "\n";
        }
    }
    
};