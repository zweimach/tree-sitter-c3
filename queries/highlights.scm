[
  "const"
  "enum"
  "extern"
  "inline"
  "struct"
  "union"
  "module"
  "private"
  "define"
  "distinct"
  "fault"
  "defer"
] @keyword

"import" @include

[
  "return"
] @keyword.return

[
  "fn"
] @keyword.function

[
  "while"
  "for"
] @repeat

[
  "if"
  "else"
  "switch"
] @conditional

[
  "="

  "-"
  "*"
  "/"
  "+"
  "%"
  "*%"

  "@"
  "~"
  "|"
  "&"
  "&&"
  "^"
  "<<"
  ">>"

  "<"
  "<="
  ">="
  ">"
  "=="
  "!="

  "!"
  "&&"
  "||"

  "-="
  "+="
  "*="
  "/="
  "%="
  "|="
  "&="
  "^="
  ">>="
  "<<="
  "--"
  "++"

  ".."

  "=>"
] @operator

(boolean_literal) @boolean

[
  "."
  ";"
  ":"
  "::"
  ","
] @punctuation.delimiter

"..." @punctuation.special

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

(string_literal) @string
(escape_sequence) @string.escape

(nil_literal) @constant.builtin
(integer_literal) @number
(float_literal) @number
(char_literal) @character

(field_expression field: (identifier) @property)
(field_expression value: (identifier) @type
  (#match? @type "^_?[A-Z]"))

(module_declaration (identifier) @namespace)
(module_declaration (scoped_identifier (identifier) @namespace .))

(import_declaration (identifier) @namespace)
(import_declaration (scoped_identifier (identifier) @namespace .))

(scoped_identifier
  path: (identifier) @namespace)
(scoped_identifier
  (scoped_identifier
    name: (identifier) @namespace))
(scoped_type_identifier
  path: (identifier) @namespace)
(scoped_type_identifier
  (scoped_identifier
    name: (identifier) @namespace))

[
 (type_identifier)
 (primitive_type)
 (pointer_type)
 (failable_type)
 (array_type)
] @type

(const_declaration (identifier) @constant)

(enumerator
  name: (const_identifier) @constant)

(call_expression
  function: (identifier) @function)
(call_expression
  function: (scoped_identifier (identifier) @function .))
(call_expression
  function: (field_expression
    field: (identifier) @function))
(call_expression
  function: (field_expression
    field: (identifier) @function))
(function_declaration
  name: (identifier) @function)

(comment) @comment

(parameter (identifier) @parameter)

(attribute (identifier) @attribute)

(identifier) @variable

(primitive_type) @type

(string_literal) @string

(ERROR) @error
