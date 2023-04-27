#ifndef CAR_H
#define CAR_H

class Car {
public:
    Car();
    Car(int price);
    int emissions_;



    int get_price() const;
    void set_price(int price);

    int get_emissions() const;
    void set_emissions(int emissions);

    virtual void drive(int kms);

private:
    int price_;

};

#endif //CAR_H
