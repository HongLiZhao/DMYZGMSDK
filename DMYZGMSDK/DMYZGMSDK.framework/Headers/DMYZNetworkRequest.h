

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, DMYZNetworkRequestType){
    GET,
    POST,
    FORM
};

@interface DMYZNetworkRequest : NSObject

@property (nonatomic, copy) NSString *serverURL;
@property (nonatomic, copy) NSString *methodName;
@property (nonatomic, strong) NSDictionary *params;
@property (nonatomic, strong) NSDictionary *header;
@property (nonatomic, assign) NSTimeInterval timeout;
@property (nonatomic, assign) DMYZNetworkRequestType requestType;
@property (nonatomic, assign) BOOL isPostJson;

@end

NS_ASSUME_NONNULL_END
