//
//  YHRoundBorderedButton.h
//  YHRoundBorderedButton
//
//  Created by Yeonghoon Park on 4/10/14.
//  Copyright (c) 2014 yhpark.co. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YHRoundBorderedButton : UIButton

/// Whether the plus icon is visible on the button.
@property (nonatomic, getter = isPlusIconVisible) BOOL plusIconVisible;

// set a custom font for the button
- (void)setCustomFont:(UIFont *)customFont;

// set a custom tinit color for the border
- (void)setTintColor:(UIColor *)tintColor borderColor:(UIColor *)borderColor;

@end
