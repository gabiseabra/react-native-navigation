#import <UIKit/UIKit.h>
#import <React/RCTConvert.h>
#import "BoolParser.h"
#import "TextParser.h"
#import "NumberParser.h"
#import "DictionaryParser.h"
#import "ColorParser.h"
#import "ImageParser.h"
#import "IntNumberParser.h"
#import "DoubleParser.h"

@interface RNNOptions : NSObject

- (instancetype)initWithDict:(NSDictionary*)dict;

- (void)mergeOptions:(RNNOptions *)otherOptions;
- (void)mergeOptions:(RNNOptions *)otherOptions overrideOptions:(BOOL)override;

@end
