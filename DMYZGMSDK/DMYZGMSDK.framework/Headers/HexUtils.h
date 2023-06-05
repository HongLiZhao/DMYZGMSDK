//
//  HexUtils.h
//  DmyzBluetooth
//
//  Created by tree on 2022/8/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HexUtils : NSObject
+ (NSString *)hexStringFromData:(NSData *)data;
+ (NSData *)dataWithHexString:(NSString *)hexStr;
+(NSString *)ToHex:(long long int)tmpid;
+ (unsigned long long)convertHexToDecimal:(NSString *)hexStr;
+ (NSData *)hexToBytes:(NSString *)str;

@end

NS_ASSUME_NONNULL_END
