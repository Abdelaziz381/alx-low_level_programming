nclude "main.h"

/**
 * print_result - Print the result.
 * @result: Result string to print
 */
void print_result(char *result)
{
    int i, is_nonzero = 0;

    for (i = 0; result[i]; i++)
    {
        if (result[i] != '0')
            is_nonzero = 1;

        if (is_nonzero || result[i + 1] == '\0')
            _putchar(result[i]);
    }

    _putchar('\n');
    free(result);
}

/**
 * multiply - Multiply a digit with a number.
 * @digit: Digit to multiply with
 * @num: Number string to multiply
 * @num_len: Length of the number string
 * @dest: Destination string for the result
 * @dest_index: Index to start adding the result
 * Return: Pointer to the result or NULL on failure
 */
char *multiply(char digit, char *num, int num_len, char *dest, int dest_index)
{
    int i, j, product, carry, sum, dest_len;

    carry = 0;
    dest_len = strlen(dest);

    for (i = num_len - 1, j = dest_index; i >= 0; i--, j--)
    {
        product = (digit - '0') * (num[i] - '0') + carry;
        carry = product / 10;
        sum = (dest[j] - '0') + (product % 10) + carry;
        carry = sum / 10;
        dest[j] = (sum % 10) + '0';
    }

    while (carry && j >= 0)
    {
        sum = (dest[j] - '0') + carry;
        carry = sum / 10;
        dest[j] = (sum % 10) + '0';
        j--;
    }

    if (carry)
    {
        return NULL;
    }

    return dest;
}

/**
 * are_digits - Check if all characters in an array are digits.
 * @arr: Array to check
 * Return: 1 if all characters are digits, 0 otherwise
 */
int are_digits(char *arr)
{
    int i;

    for (i = 0; arr[i]; i++)
    {
        if (arr[i] < '0' || arr[i] > '9')
            return 0;
    }

    return 1;
}

/**
 * initialize_string - Initialize a string with '0'.
 * @str: String to initialize
 * @length: Length of the string
 */
void initialize_string(char *str, int length)
{
    int i;

    for (i = 0; i < length; i++)
        str[i] = '0';

    str[i] = '\0';
}

/**
 * main - Multiply two numbers represented as strings.
 * @argc: Number of arguments
 * @argv: Argument vector
 * Return: 0 if successful, 98 if there's an error
 */
int main(int argc, char *argv[])
{
    int len1, len2, result_len, temp_index, i;
    char *input1, *input2, *result;
    char error_msg[] = "Error\n";

    if (argc != 3 || !are_digits(argv))
    {
        for (i = 0; error_msg[i]; i++)
            _putchar(error_msg[i]);
        return (98);
    }

    len1 = strlen(argv[1]);
    len2 = strlen(argv[2]);
    result_len = len1 + len2 + 1;

    input1 = malloc(result_len * sizeof(char));
    input2 = argv[2];
    result = malloc(result_len * sizeof(char));

    if (input1 == NULL || result == NULL)
    {
        for (i = 0; error_msg[i]; i++)
            _putchar(error_msg[i]);
        return (98);
    }

    initialize_string(input1, result_len - 1);

    for (temp_index = len2 - 1, i = 0; temp_index >= 0; temp_index--, i++)
    {
        char *temp = multiply(argv[2][temp_index], argv[1], len1 - 1, input1, (result_len - 2) - i);

        if (temp == NULL)
        {
            for (i = 0; error_msg[i]; i++)
                _putchar(error_msg[i]);
            free(input1);
            free(result);
            return (98);
        }
    }

    print_result(input1);
    return (0);
}

