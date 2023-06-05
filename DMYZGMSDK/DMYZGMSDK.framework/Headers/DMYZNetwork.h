


#import <Foundation/Foundation.h>
#import "DMYZNetworkRequest.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^DMYZSuccessBlock)(id responseObject);
typedef void (^DMYZFailureBlock)(NSString *error);

@interface DMYZNetwork : NSObject

+ (instancetype)shareNetwork;
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (NSURLSessionTask *)sendRequest:(DMYZNetworkRequest *)request
                          success:(nullable DMYZSuccessBlock)success
                          failure:(nullable DMYZFailureBlock)failure;

@end

NS_ASSUME_NONNULL_END
