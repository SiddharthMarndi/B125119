#include <iostream>
using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(int userRating, int popularity) {
    }
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.7 * userRating + 0.3 * popularity;
        cout << "Personalized Recommendation Score: " << score << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.3 * userRating + 0.7 * popularity;
        cout << "Trending Recommendation Score: " << score << endl;
    }
};

int main() {
  

    PersonalizedRecommender p;
    TrendingRecommender t;

    Recommender *r;

    r = &p;
    r->generateRecommendation(67, 50);

    r = &t;
    r->generateRecommendation(70, 42);

    return 0;
}