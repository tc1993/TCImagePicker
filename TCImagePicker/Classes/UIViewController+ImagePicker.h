//
//  UIViewController+ImagePicker.h
//  QifujiaiOS
//
//  Created by tc on 2022/10/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ImagePickerCompletionHandler)(NSData *imageData, UIImage *image);

@interface UIViewController (ImagePicker)

- (void)pickImageWithCompletionHandler:(ImagePickerCompletionHandler)completionHandler;
- (void)pickImageWithpickImageCutImageWithImageSize:(CGSize)imageSize CompletionHandler:(ImagePickerCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
