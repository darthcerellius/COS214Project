//
// Created by kyle-pc on 2020/11/02.
//

#ifndef COS214PROJECT_GOODSCONTAINER_H
#define COS214PROJECT_GOODSCONTAINER_H


#include "../Calendar/Calendar.h"

/**
 * @brief Goods container for the racetrack
 */
class GoodsContainer {
private:
    std::string contents;
    Date* shippingDate;
    std::string shippingContinent;
    std::string shippingTrack;
public:
    GoodsContainer() = default;
    void setShippingLabel(std::string track, std::string continent, Date* date);
    std::string getTrack();
    std::string getContinent();
    Date* getDate();
};


#endif //COS214PROJECT_GOODSCONTAINER_H
