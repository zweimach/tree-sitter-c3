[
  "module"
  "import"
  "struct"
  "union"
  "enum"
] @keyword

[
  "return"
] @keyword.return

[
  "fn"
] @keyword.function

[ 
  "&" 
  "*" 
  "+" 
  "-" 
  "!" 
  "~" 
  "=" 
  "@" 
  "/" 
  "%" 
] @operator

[
  "::" 
  ":" 
  ";" 
] @punctuation.delimiter

[
  "["
  "]"
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

[
  "true"
  "false"
] @boolean

[
  "else"
  "if"
  ;"switch"
] @conditional

[
  "for"
  "while"
] @repeat

[
  "true"
  "false"
] @boolean

[
  "else"
  "if"
  ;"switch"
] @conditional

(
  [
    return_type: (primitive_type) 
    name: (identifier)
    parameters: (parameters)
  ] @function
)

(enumerator name: (const_identifier) @constant)

(primitive_type) @type
(comment) @comment
(string_literal) @string
