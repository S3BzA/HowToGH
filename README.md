# Hello,

This project provides a convenient project setup experience by providing you with a simple makefile a file structure. The makefile provides you with the following commands:

- `make all`: builds and runs the project
- `make build`: builds an executable and stores it in the build/ directory
- `make clean`: removes the build/ directory contents
- `make run` : runs executable in the build/ directory
- `make gdb`: runs the executable using gdb
- `make valgrind`: runs the executable using Valgrind

## Doxygen

### Example Comment Blocks
Below is a detailed Doxygen comment block template. You can adapt it for functions, classes, files, or any other code element. Each section is optional and can be customized as per your practical's requirements.

#### Function Template

```cpp
/**
 * @brief [A concise description of the function]
 * 
 * [A more detailed description of what the function does]
 *
 * @param[in]  param1  [Description of the first input parameter]
 * @param[in]  param2  [Description of the second input parameter]
 * @param[out] param3  [Description of the output parameter, if any]
 * @param[in,out] param4  [Description of the parameter that is both input and output, if any]
 * 
 * @return [Description of the return value, if any]
 * 
 * @retval [Value1] [Condition or description when this value is returned]
 * @retval [Value2] [Condition or description when this value is returned]
 * 
 * @throws [ExceptionType] [Description of any exceptions that can be thrown]
 * 
 * @pre [Precondition that must be met before calling the function]
 * @post [Postcondition that will be true after the function completes]
 * 
 * @note [Additional notes or warnings]
 * @warning [Warnings about using the function, if any]
 * 
 * @attention [Special attention that should be paid, if any]
 * 
 * @see [Related functions, classes, or documentation references]
 * @todo [Any TODO items or future improvements related to the function]
 * 
 * @deprecated [Description of why the function is deprecated and what to use instead]
 */
```

#### Class Template

```cpp
/**
 * @class [ClassName]
 * @brief [A concise description of the class]
 * 
 * [A more detailed description of the class, its purpose, and how it should be used]
 *
 * @tparam T [Description of the template parameter, if the class is templated]
 * 
 * @ingroup [Group name, if the class belongs to a specific group]
 * 
 * @implements [Interfaces or base classes that this class implements or inherits from]
 * 
 * @author [Author's name]
 * @date [Date of creation or last modification]
 * 
 * @version [Version of the class]
 * 
 * @see [Related classes, functions, or documentation references]
 * @todo [Any TODO items or future improvements related to the class]
 * 
 * @warning [Warnings about using the class, if any]
 * 
 * @attention [Special attention that should be paid, if any]
 * 
 * @note [Additional notes or warnings]
 */
```

#### File Template

```cpp
/**
 * @file [filename.ext]
 * @brief [A concise description of the file's purpose]
 * 
 * [A more detailed description of what the file contains, such as the main classes, functions, or usage]
 * 
 * @author [Author's name]
 * @date [Date of creation or last modification]
 * 
 * @version [Version of the file]
 * 
 * @see [References to related files, classes, or documentation]
 * @todo [Any TODO items or future improvements related to the file]
 * 
 * @warning [Warnings about using the content of the file, if any]
 * 
 * @attention [Special attention that should be paid, if any]
 * 
 * @note [Additional notes or warnings]
 */
```

#### Variable or Enum Template

```cpp
/**
 * @var [variable_name]
 * @brief [A concise description of the variable's purpose]
 * 
 * [A more detailed description of the variable, including its role in the code]
 * 
 * @note [Additional notes or warnings]
 * @warning [Warnings about using the variable, if any]
 * 
 * @attention [Special attention that should be paid, if any]
 */
```

#### Enum Template

```cpp
/**
 * @enum [EnumName]
 * @brief [A concise description of the enumeration's purpose]
 * 
 * [A more detailed description of the enumeration, its purpose, and how it should be used]
 * 
 * @var [EnumName::Value1]
 * [Description of the first enumerator]
 * 
 * @var [EnumName::Value2]
 * [Description of the second enumerator]
 * 
 * @note [Additional notes or warnings]
 * @warning [Warnings about using the enumeration, if any]
 * 
 * @attention [Special attention that should be paid, if any]
 */
```

#### Main Sections in the Templates

- **@brief**: Short description.
- **@param**: Explanation of parameters (input, output, or both).
- **@return**: Return value.
- **@retval**: Return value under specific conditions.
- **@throws**: Exceptions that may be thrown.
- **@pre**: Preconditions before function execution.
- **@post**: Postconditions after function execution.
- **@note**, **@warning**, **@attention**: Special notes or warnings.
- **@see**: References to related content.
- **@todo**: Items or improvements to be addressed.
- **@deprecated**: Marking deprecated functions or features.
