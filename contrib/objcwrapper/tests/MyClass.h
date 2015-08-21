@interface MyClass : NSObject
  <NSCoding, NSCopying, NSMutableCopying, NSFastEnumeration>

+ (id) array;
+ (id) arrayWithContentsOfFile: (NSString*)file;

- (id) arrayWithArray: (MyClass*)array;

@property (readonly) NSUInteger count;
@property NSUInteger head;

@end
