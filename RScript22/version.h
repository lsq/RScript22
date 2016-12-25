#if !defined(VERSION_HEADER)
#define VERSION_HEADER

#if defined(RUBY_2_2)
#define VERSION 2.2
#define TLIBID uuid(10D4CB67-C6A3-46CF-BE81-B15899ABA602)
#define MAJOR_VERSION 2
#define MINOR_VERSION 2
#define PRODUCT_VERSION "2.2.0.2"
#define RSCRIPT_VERSION "2.2"
#define RUBYIZE_VERSION L"2.2.0"
#define UUID_RUBYSCRIPT uuid(456A3763-90A4-4F2A-BFF1-4B773C1056EC)
#define CLSID_RUBYSCRIPT  L"{456A3763-90A4-4F2A-BFF1-4B773C1056EC}"
#define UUID_RUBYIZE uuid(0BCFF05A-C2BF-4CB2-A778-3428A8E85A21)
#define CLSID_RUBYIZE  L"{0BCFF05A-C2BF-4CB2-A778-3428A8E85A21}"
#elif defined(RUBY_2_3)
#define VERSION 2.3
#define TLIBID uuid(3BAF57A3-B434-4366-AE20-2F9147AF5952)
#define MAJOR_VERSION 2
#define MINOR_VERSION 3
#define PRODUCT_VERSION "2.3.0.2"
#define RSCRIPT_VERSION "2.3"
#define RUBYIZE_VERSION L"2.3.0"
#define UUID_RUBYSCRIPT uuid(7DEFB9DD-E95C-4778-B2D8-014C05C69028)
#define CLSID_RUBYSCRIPT  L"{7DEFB9DD-E95C-4778-B2D8-014C05C69028}"
#define UUID_RUBYIZE uuid(97AFE7B5-AD40-42B2-870E-C3B507DB26A9)
#define CLSID_RUBYIZE  L"{97AFE7B5-AD40-42B2-870E-C3B507DB26A9}"
#elif defined(RUBY_2_4)
#define VERSION 2.4
#define TLIBID uuid(C873D5D8-6AB1-4C02-9085-F728A746C14B)
#define MAJOR_VERSION 2
#define MINOR_VERSION 4
#define PRODUCT_VERSION "2.4.0.2"
#define RSCRIPT_VERSION "2.4"
#define RUBYIZE_VERSION L"2.4.0"
#define UUID_RUBYSCRIPT uuid(39D7243A-AF85-46BB-B70C-200EE1021A9B)
#define CLSID_RUBYSCRIPT  L"{39D7243A-AF85-46BB-B70C-200EE1021A9B}"
#define UUID_RUBYIZE uuid(875EBE2B-AFC1-48CF-9B2D-0606E22E77F1)
#define CLSID_RUBYIZE  L"{875EBE2B-AFC1-48CF-9B2D-0606E22E77F1}"
#else
#error "no ruby version defined"
#endif

#endif
