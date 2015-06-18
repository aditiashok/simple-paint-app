//
//  ViewController.h
//  simple-paint-app
//
//  Created by Aditi Ashok on 6/17/15.
//  Copyright (c) 2015 Aditi Ashok. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    BOOL mouseSwiped;
}



@end

