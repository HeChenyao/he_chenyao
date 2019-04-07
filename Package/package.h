#ifndef PACKAGE_H
#define PACKAGE_H

#include<string>

class Package
{
public:
    Package(const std::string rec,const std::string con,
            const std::string adr,const std::string cit,
            const std::string sta,const std::string pos,
            double wei,double pri)
    {
        reconsignee = rec;
        consignee = con;
        address = adr;
        city = cit;
        state = sta;
        post = pos;
        weight = wei;
        price =  pri;
    }

    double CalculateCost()
    {
        price *= weight;
        return price;

    }

    void DisplayPackage()
    {
        cout<<'ReConsignee:'<<reconsignee<<'Consignee:'<<consignee
           <<'Address:'<<address<<'City:'<<city<<'State:'<<state
          <<'Post:'<<post<<'Weight:'<<weight<<'KG'<<'Price:$'<<price;
    }

    void setReConsignee(const std::string rec)
    {
        reconsignee = recon;
    }
    std::string getReConsignee()const
    {
        return reconsignee;
    }

    void setConsignee(const std::string con)
    {
        consignee = con;
    }
    std::string getConsignee()const
    {
        return consignee;
    }

    void setAddress(const std::string adr)
    {
        address = adr;
    }
    std::string getAddress()const
    {
        return address;
    }

    void setCity(const std::string cit)
    {
        city = cit;
    }
    std::string getCity()const
    {
        reurn city;
    }

    void setState(const std::string sta)
    {
        state = sta;
    }
    std::string getState()const
    {
        return state;
    }

    void setPost(const std::string pos)
    {
        post = p;
    }
    std::string getPost()const
    {
        return post;
    }

    void setWeight(const std::string wei)
    {
        weight = wei;
    }
    double getWeight()const
    {
        return weight;
    }

    void setPrice(const std::string pri)
    {
        price = pri;
    }
    double getPrice()const
    {
        return price;
    }
private:
    std::string reconsignee;
    std::string consignee;
    std::string address;
    std::string city;
    std::string state;
    std::string post;
    double weight;
    double price;
}

#endif // PACKAGE_H
