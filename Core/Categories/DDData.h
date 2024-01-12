#import <Foundation/Foundation.h>

// 这里面, 是分类的扩展, 但是所有的都是 DD 开头的. 也可以这样吧. 
@interface NSData (DDData)

- (NSData *)md5Digest;

- (NSData *)sha1Digest;

- (NSString *)hexStringValue;

- (NSString *)base64Encoded;
- (NSData *)base64Decoded;

@end
