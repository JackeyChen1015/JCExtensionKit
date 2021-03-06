//
//  UIImage+JCExtension.h
//  JCCategoryKit
//
//  Created by JackeyChen1015 on 2019/5/3.
//  Copyright © 2019 JackeyChen1015. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (JCExtension)

/**
 
 生成一张高斯模糊的图片
 
 @param image 原图
 @param blur 模糊程度
 @return 高斯模糊的图片
 */
+ (UIImage *)jc_blurImage:(UIImage *)image blur:(CGFloat)blur;

/**
 生成一张圆形图片
 
 @param originImage 原始图片
 @param borderColor 边框颜色
 @param borderWidth 边框宽度
 @return 圆形图片
 */
+ (UIImage *)jc_circleImage:(UIImage *)originImage borderColor:(UIColor *)borderColor borderWidth:(CGFloat)borderWidth;

/**
 根据颜色生成一张图片
 
 @param color 颜色
 @param size 要生成图片的尺寸
 @return 图片
 */
+ (UIImage *)jc_imageWithColor:(UIColor *)color size:(CGSize)size;

/**
 生成一张不被渲染的图片
 
 @param imageName 图片名称
 @return 不会被渲染的原始图片
 */
+ (UIImage *)jc_imageRenderingModeAlowsOriginal:(NSString *)imageName;

/**
 将图片转换成黑白图像
 
 @param sourceImage 原图
 @return 黑白图像
 */
+ (UIImage*)jc_covertToGrayImageFromImage:(UIImage*)sourceImage;

/**
 *  返回指定颜色生成的图片
 *
 *  @param color 颜色
 *  @param size  尺寸
 *
 *  @return 指定颜色生成的图片
 */
+ (UIImage *)jc_imageWithColor:(UIColor *)color andSize:(CGSize)size;

/**
 *  获取指定尺寸（50*50）的图片
 *
 *  @param color 图片颜色
 *  @param name  文本,居中显示
 *
 *  @return 指定尺寸的图片
 */
+ (UIImage *)jc_imageWithColor:(UIColor *)color text:(NSString *)name;

/**
 *  旋转图片
 *
 *  @param isHorizontal 方向
 *
 *  @return 结果图片
 */
- (UIImage *)jc_flip:(BOOL)isHorizontal;

/**
 *  修正图片方向
 *
 *  @return 修改后的图片
 */
- (UIImage *)jc_fixOrientation;

@end

NS_ASSUME_NONNULL_END
