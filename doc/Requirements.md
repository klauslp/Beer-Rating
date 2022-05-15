# Beer File Storage

Document version history:

Version

- 1.0 Created requirement document with a short description of feature 1 to 7

## Goal

    The overall goal is to learn how to store and retrieve file records from a Beer rating application. The Beer rating records are stored in a binary file format. You can search for a record and view the record.

## Other requirements

    C++ 20 is the programming language used. An Agile development approach with Google Test, where the Test comes first. This is a simple console application. Development environment is VSCode editor and CMake and visual studio as compiler tools.

## Features

List of features:

1. Save a beer rating record
2. View a beer rating record
3. Search for a record by name
4. Search all with wildcard *
5. View result list of search
6. Simple console menu
7. Create new beer rating

## Requirement analysis

    A short run down of all the requirements with prioritizing each requirement 

### 1. Save a beer rating record

Priority:

    Must have requirement.

Description:

    A beer rating record is saved in a binary .dat file. A record has the following properties:
    - string Name: The name of the beer
    - int rating: Number from 0 - 10 of taste and impression of the beer
    - float alcohol: The procentage of alcohol in the beer
    - string brewery: Name of the brewery behind the beer
    - string taste: A text description of the taste and overall impression.
    - date review date: The date of reviewing the beer  

### 2. View a beer rating record

Priority:

    Must have requirement.

Description:

    Load a beer rating record and list the properties of the record.

### 3. Search for a record by name

Priority:

    Must have requirement.

Description:

    Choose to search for a rating of the beer by entering the name of the beer.

### 4. Search all with wildcard *

Priority:

    Should have requirement.

Description:
    When you cannot remember the name of the beer or you just want to see all records listed you write an asterics (*)

### 5. View result list of search

Priority:

    Nice to have requirement.

Description:
    The result of a search should be displayed in a list.

### 6. Simple console menu

Priority:

    Must have requirement.

Description:

    A simple console menu for navigating the application.
    Menu:
    1. Rate a beer
    2. Search for beer(s)
    3. Exit 

### 7. Create new beer rating

Priority:

    Must have requirement.

Description:
    Ask the user to enter the properties of the beer rating.

## Design considerations

### Entites

We want a beer-rating object that can create, read and search for a rating. I would be nice with a design that could later be changed to graphical user interface.

- reviewer, reviews and rates beers.
- beer_rating, properties of a rated beer.

Keep it simple as a start a Reviewer can create rating, view a rating, and search for ratings. That will do for now
