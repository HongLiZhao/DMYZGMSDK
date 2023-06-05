//
//  ScantoastUtil.h
//  MAtrixnetsTool
//
//  Created by zhl on 2023/5/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, Gravity) {
    TOP,
    CENTRE,
    BOTTOM
};

@interface ScantoastUtil : NSObject
+(instancetype)toast;
// 显示Toast（默认时长2.5秒，默认底部显示）
-(void)showToast:(NSString *)msg;
// 显示Toast：设置时长（默认底部显示）
-(void)showToast:(NSString *)msg duration:(NSTimeInterval)duration;
// 显示Toast：设置时长，设置显示位置（TOP，CENTRE，BOTTOM）
-(void)showToast:(NSString *)msg duration:(NSTimeInterval)duration gravity:(Gravity)gravity;
// 显示Toast：设置时长，设置显示位置（TOP，CENTRE，BOTTOM），设置消失回调监听
-(void)showToast:(NSString *)msg duration:(NSTimeInterval)duration gravity:(Gravity)gravity finishHandler:(dispatch_block_t)finishHandler;


@end

NS_ASSUME_NONNULL_END
