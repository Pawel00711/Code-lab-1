Advanced requirements:

2. Try giving the program both your first and second name when asked. What do you notice? Can you provide a fix?
If we provide a name and a second name used cin only, the program will store the name only(cin), and stop reading after the first space.
Example:

string name;
cout << "Enter full name: ";
Paul Mcdonald
cin >> name;
cout << "Your name is: " << name << endl;

Input:
Paul Mcdonald
Output:
Paul

cin  >> will store only Paul as space appears after Paul


To avoid this problem and keep space between the name and the second name, use:

string name;
cout << "Enter full name: ";
Paul Mcdonald
getline(cin, name);
cout << "Your name is: " << name << endl;

Input:
Paul Mcdonald
Output:
Paul Mcdonald




The program will read the full line, including spaces.

3. Try entering a string or letter value when asked to enter your age. What happens? Can you provide a fix?

Depends on the requirements of the program; in most situations, age is typed using numeric digits. If the user types age with letters (twenty) 
program may occu an error:

    int age = twenty;
  cout << "Invalid input";

To avoid this standard error, the <cctype> function is perfect, which analyses characters to determine if they are letters, numbers, lower or upper case, etc.

if (isValidNumber(ageInput)) {
    age = stoi(ageInput);
    break;
  } else {
  // Error output
            cout << "Invalid age. Please enter numbers only." << endl;
        }
                            
