#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

// GradedActivity class declaration

class GradedActivity
{
    private:
        double score;   //To hold the numeric score
    public:
        //Default constructor
        GradedActivity()
        {  score = 0.0; }

        //Constructor
        GradedActivity(double s)
        {  score = s; }

        //Setter function
        void setScore(double s)
        {  score = s; }

        //Getter functions
        double getScore() const
        {  return score; }

        char getLetterGrade() const;

};

#endif