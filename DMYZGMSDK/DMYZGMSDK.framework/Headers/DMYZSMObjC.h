//
//  DMYZSMObjC.h
//  MatrixnetsBluetoothSDK
//
//  Created by zhl on 2023/4/9.
//

#import <Foundation/Foundation.h>
#import"part4.h"
#import "part2.h"
#include "sm4test.h"

NS_ASSUME_NONNULL_BEGIN

@interface DMYZSMObjC : NSObject
+ (NSString*)sm2SiginWithPriteKey:(NSString*)pritekeyValue Pubkey:(NSString*)pubkeyValue encryptText:(NSString*)text;
+ (BOOL)sm2VerifySiginWithPubKeyValue:(NSString*)pubKeyValue andsiginText:(NSString*)siginText encryptText:(NSString*)text;
+ (NSString*)sm2EncryPubkey:(NSString*)pubKeyValue planText:(NSString*)planText;
+ (NSString*)sm2DencryWithPrivateKey:(NSString*)privateKey encryText:(NSString*)encryText;
+ (NSString*)sm4EncryWithKey:(NSString*)keyValue planText:(NSString*)planText;
+ (NSString*)sm4DencryWithKey:(NSString*)keyValue encryText:(NSString*)encryText;
+ (nullable NSString *)derEncode:(NSString *)signRS;
+ (nullable NSString *)derDecode:(NSString *)derSign;
+ (nullable NSString *)generatSm4keys;
+ (NSString *)md5HexDigest:(NSString* )input;
+ (NSString *)md5EncryptStr:(NSString *)str bateNum:(NSInteger)bateNum isLowercaseStr:(BOOL)isLowercaseStr;
@end

NS_ASSUME_NONNULL_END
