module package::basic;
// <- keyword
//     ^ namespace
//            ^ punctuation.delimiter
//               ^namespace
//                   ^ punctuation.delimiter

import std::io;
// <- include
//      ^ namespace
//        ^ punctuation.delimiter
//          ^ namespace
//            ^ punctuation.delimiter

fn void! main(int argc, char** argv) {
// <- keyword
//  ^ type
//     ^ operator
//        ^ function
//           ^ punctuation.bracket
//             ^ type
//                 ^ parameter
//                    ^ punctuation.delimiter
//                       ^ type
//                          ^ operator
//                           ^ operator
//                               ^ parameter
//                                 ^ punctuation.bracket
//                                   ^ punctuation.bracket

io::printf("Hello, World!\n");
// <- namespace
// ^ punctuation.delimiter
//   ^ function
//        ^ punctuation.bracket
//            ^ string
//                       ^ string.escape
//                          ^ punctuation.bracket
//                           ^ punctuation.delimiter

}
// <- punctuation.bracket

fn int square(int x, int y) {
// <- keyword
//  ^ type
//      ^ function
//           ^ punctuation.bracket
//             ^ type
//                ^ parameter
//                 ^ punctuation.delimiter
//                    ^ type
//                       ^ parameter
//                        ^ punctuation.bracket
//                          ^ punctuation.bracket

int s = x * y;
// <- type
//  ^ variable
//    ^ operator
//      ^ variable
//          ^ variable
//           ^ punctuation.delimiter

return s;
// <- keyword.return
//     ^ variable
//      ^ punctuation.delimiter
