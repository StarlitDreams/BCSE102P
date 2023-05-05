    /*
    Create two classes DM and DB. DM stores the distance in meters and centimetres and DB Stores the distance in feet and inches. Write a program to read the values for the class

    objects and Add one object DM with another object DB. Note: use a friend function to

    carry out addition operation. The resultant object is stored in DM and display it.

    1 feet = 30 centimetres

    1 inch =2.54 centimetres

    1 meter = 100 centimetres                                                                
    For example:

    Input	Result
    Enter the value in meter and centimeter:
    Enter meter value : 12
    Enter centimeter value: 34
    Enter the value in feet and inches:
    Enter feet value : 12
    Enter inches value : 4
    The summed value in meter is: 15.648
    Enter the value in meter and centimeter: 
    Enter meter value : 15
    Enter centimeter value: 54
    Enter the value in feet and inches: 
    Enter feet value :34
    Enter inches value :7
    The summed value in meter is: 25.336
    Enter the value in meter and centimeter: 
    Enter meter value : 45
    Enter centimeter value: 78
    Enter the value in feet and inches: 
    Enter feet value :23
    Enter inches value :9
    The summed value in meter is: 51.992

    */

    #include <iostream>
    #include<cmath>

    using namespace std;

    //inches
    class DB
    {
        private:
        int feet;
        int inches;
        friend class DM;

        public:
        void setfeet(int new_feet){feet=new_feet;}
        void setinches(int new_inches){inches=new_inches;}
        int getfeet(){return feet;}
        int getinches(){return inches;}
        
    };
    class DM
    {
        private:
        int meter;
        int centimeter;
        
        public:
        void setmeter(int new_meter){meter=new_meter;}
        void setcentimeter(int new_centimeter){centimeter=new_centimeter;}
        int getmeter(){return meter;}
        int getcentimeter(){return centimeter;}
        void add(DB& db)
        {
            double final_metre=meter+db.feet*0.3048;
            double final_centimeter= centimeter+ db.inches*2.54;
            cout<<"The summed value in meter is: "<< round((final_metre + (final_centimeter/100))*1000)/1000 <<endl;
        }
    };


    int main()
    {
        int new_meter,new_centimeter,new_feet,new_inches;
        DM dm;
        DB db;

        cout<<"Enter the value in meter and centimeter: "<<endl;
        cout<<"Enter meter value : ";
        cin>>new_meter;
        cout<<"Enter centimeter value: ";
        cin>>new_centimeter;
        cout<<"Enter the value in feet and inches: "<<endl;
        cout<<"Enter feet value :";
        cin>>new_feet;
        cout<<"Enter inches value :";
        cin>>new_inches;
        dm.setmeter(new_meter);
        dm.setcentimeter(new_centimeter);
        db.setfeet(new_feet);
        db.setinches(new_inches);
        dm.add(db);
        return 0;
    }