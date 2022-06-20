#import <Foundation/Foundation.h>
#import <Instabug/IBGTypes.h>

typedef NSDictionary<NSString*, NSNumber*> ArgsDictionary;

@interface ArgsRegistry : NSObject

+ (ArgsDictionary *) welcomeMessageModes;
+ (ArgsDictionary *) colorThemes;
+ (ArgsDictionary *) floatingButtonEdges;
+ (NSDictionary<NSString *, NSString *> *) placeholders;

@end
