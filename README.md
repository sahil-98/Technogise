# Chess

Chess application written in C++ depicts all possbile moves of the 6 chess pieces from their current Position.

## Approach
- Code written for this application is scalable with respect to Board Dimension and Pieces . Currently it works for 8X8 dimension and all 6
chess pieces are Implemented using Principles of OOP.
- First approach was  to code the movements of every in their classes but to avoid the repetitive code for every
"Piece" class ,also following the **Single responsibility principle**, "Movements" class was written which consist of Move function, this function accepts the arguments for current position , direction to move and
maximum steps for every piece we call this function for.

- Following **Open-closed principle** , A "Piece" abstract class was created with an abstracted method , Every piece extends that class and overrides the  method without modifying it in the abstract class.

- Chess class is the Handler class,  also loosely coupled and handles requests from **main.cpp**.



## Run

```
g++ main.cpp
```

## Architecture
### Classes :
**Piece** : An abstract class , all 6 piece classes extend Piece to define their functionality.

**PieceFactory** : A model class which returns the pointer to piece object for particular piece query.

**Movements** : This class defines movements for every direction for all pieces.

**Chess** : It is a Handler class , It accepts request from main , after validity checks it calls for other classes.

       



## Unit Testing

Unit Testing is implemented using C++ assert, Code has been tested for all the functions  ,Handler function **UnitTest.cpp** calls for every testfile  , Also test files notation has been given using "Test" as prefix for all the classes

