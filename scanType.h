#ifndef HAVE_SCANTYPE_H
#define HAVE_SCANTYPE_H

enum token_class
{
  TC_ID = 1,
  TC_NUMCONST,
  TC_CHARCONST,
  TC_BOOLCONST,
  TC_STRINGCONST,
  TC_OPERATOR,
  TC_KEYWORD
};

enum operator
{
  OP_AND, OP_OR, OP_EQ, OP_NEQ, OP_LESS, OP_LEQ,
  OP_GREAT, OP_GEQ, OP_ARROW, OP_PLUSEQ, OP_MINUSEQ, OP_STAREQ,
  OP_SLASHEQ, OP_PLUS, OP_MINUS, OP_STAR, OP_SLASH, OP_PERCENT,
  OP_LBRACKET, OP_RBRACKET, OP_MINUSMINUS, OP_PLUSPLUS, OP_NOT, OP_QUESTMARK,
  OP_LPAREN, OP_RPAREN, OP_COMMA, OP_SEMICOLON, OP_COLON
};

enum keyword
{
  KW_STATIC, KW_BOOL, KW_CHAR, KW_INT, KW_BEGIN, KW_END,
  KW_IF, KW_THEN, KW_ELSE, KW_WHILE, KW_DO, KW_FOR,
  KW_TO, KW_BY, KW_RETURN, KW_BREAK, KW_OR, KW_AND, KW_NOT
};

struct token_data
{
  int token_class;
  int line;
  char *token_str;
  int tok_length;
  int str_length;

  union
  {
    char ch_value;
    int num_value;
    int kw_op; /* keyword or operator number */
    char *str_value;
  };
};

#endif /* ! HAVE_SCANTYPE_H */
