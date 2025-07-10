homework = [96; 105; 72; 85; 85; 90; 97; 95; 92; 80; 98; 91];
quiz = [5; 7; 5; 8; 3; 5];
exam =[76; 86]; % midterm is the first score
weight1 = [0.40; 0.1; 0.15; 0.35];
weight2 = [0.40; 0.1; 0.05; 0.45];

shomework = sort(homework) %sorted hw grades from lowest to highest
avghw = sum(shomework(2:end))/(length(shomework)-1) %average hw grade excluding the lowest score
finHwGrade = min(avghw,100) %if the average is greater than 100, it'll be set to 100 with the min() function

sQuiz = sort(quiz(1:end-1))
totalPoints = sum(sQuiz(2:end)) + quiz(end)
quizAvg = totalPoints/(length(quiz)-1)/8*100
finQuizGrade = min(100,quizAvg)

grades = [finHwGrade; finQuizGrade; exam(1); exam(2)] %the dot product wouldn't work properly with this until you made it a column vector

grade1 = weight1'*grades

grade2 = weight2'*grades
