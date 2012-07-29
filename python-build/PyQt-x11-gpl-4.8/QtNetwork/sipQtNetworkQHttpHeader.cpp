/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:29 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtNetwork.h"

#line 36 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtNetwork/qhttp.sip"
#include <qhttp.h>
#line 39 "sipQtNetworkQHttpHeader.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtNetworkQHttpHeader.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 46 "sipQtNetworkQHttpHeader.cpp"
#line 205 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 50 "sipQtNetworkQHttpHeader.cpp"
#line 82 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 53 "sipQtNetworkQHttpHeader.cpp"


class sipQHttpHeader : public QHttpHeader
{
public:
    sipQHttpHeader();
    sipQHttpHeader(const QHttpHeader&);
    sipQHttpHeader(const QString&);
    virtual ~sipQHttpHeader();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtectVirt_parseLine(bool,const QString&,int);
    bool sipProtect_parse(const QString&);
    void sipProtect_setValid(bool);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QString toString() const;
    int majorVersion() const;
    int minorVersion() const;
    bool parseLine(const QString&,int);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHttpHeader(const sipQHttpHeader &);
    sipQHttpHeader &operator = (const sipQHttpHeader &);

    char sipPyMethods[4];
};

sipQHttpHeader::sipQHttpHeader(): QHttpHeader(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpHeader::sipQHttpHeader(const QHttpHeader& a0): QHttpHeader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpHeader::sipQHttpHeader(const QString& a0): QHttpHeader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHttpHeader::~sipQHttpHeader()
{
    sipCommonDtor(sipPySelf);
}

QString sipQHttpHeader::toString() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_toString);

    if (!meth)
        return QHttpHeader::toString();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[62]))(sipGILState,meth);
}

int sipQHttpHeader::majorVersion() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QHttpHeader,sipName_majorVersion);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[6]))(sipGILState,meth);
}

int sipQHttpHeader::minorVersion() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QHttpHeader,sipName_minorVersion);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtCore_6)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_6)(sipModuleAPI_QtNetwork_QtCore->em_virthandlers[6]))(sipGILState,meth);
}

bool sipQHttpHeader::parseLine(const QString& a0,int a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_parseLine);

    if (!meth)
        return QHttpHeader::parseLine(a0,a1);

    extern bool sipVH_QtNetwork_16(sip_gilstate_t,PyObject *,const QString&,int);

    return sipVH_QtNetwork_16(sipGILState,meth,a0,a1);
}

bool sipQHttpHeader::sipProtectVirt_parseLine(bool sipSelfWasArg,const QString& a0,int a1)
{
    return (sipSelfWasArg ? QHttpHeader::parseLine(a0,a1) : parseLine(a0,a1));
}

bool sipQHttpHeader::sipProtect_parse(const QString& a0)
{
    return QHttpHeader::parse(a0);
}

void sipQHttpHeader::sipProtect_setValid(bool a0)
{
    QHttpHeader::setValid(a0);
}


extern "C" {static PyObject *meth_QHttpHeader_setValue(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValue(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_setValue, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_setValues(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_setValues(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QPair<QString,QString> > * a0;
        int a0State = 0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QList_0600QPair_0100QString_0100QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValues(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QList<QPair<QString,QString> > *>(a0),sipType_QList_0600QPair_0100QString_0100QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_setValues, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_addValue(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_addValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addValue(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_addValue, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_values(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_values(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            QList<QPair<QString,QString> > *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QPair<QString,QString> >(sipCpp->values());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0600QPair_0100QString_0100QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_values, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_hasKey(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_hasKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasKey(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_hasKey, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_keys(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_keys(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->keys());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_keys, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_value(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->value(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_value, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_allValues(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_allValues(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->allValues(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_allValues, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_removeValue(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_removeValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeValue(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_removeValue, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_removeAllValues(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_removeAllValues(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeAllValues(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_removeAllValues, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_hasContentLength(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_hasContentLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasContentLength();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_hasContentLength, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_contentLength(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_contentLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            uint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->contentLength();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_contentLength, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_setContentLength(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_setContentLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QHttpHeader, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setContentLength(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_setContentLength, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_hasContentType(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_hasContentType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasContentType();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_hasContentType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_contentType(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_contentType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->contentType());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_contentType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_setContentType(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_setContentType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setContentType(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_setContentType, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_toString(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString((sipSelfWasArg ? sipCpp->QHttpHeader::toString() : sipCpp->toString()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_toString, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_isValid(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_isValid, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_majorVersion(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_majorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QHttpHeader, sipName_majorVersion);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->majorVersion();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_majorVersion, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_minorVersion(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_minorVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHttpHeader, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QHttpHeader, sipName_minorVersion);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->minorVersion();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_minorVersion, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_parseLine(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_parseLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        sipQHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtectVirt_parseLine(sipSelfWasArg,*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_parseLine, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_parse(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_parse(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        sipQHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QHttpHeader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sipProtect_parse(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_parse, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QHttpHeader_setValid(PyObject *, PyObject *);}
static PyObject *meth_QHttpHeader_setValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        sipQHttpHeader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QHttpHeader, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->sipProtect_setValid(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHttpHeader, sipName_setValid, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QHttpHeader(void *, const sipTypeDef *);}
static void *cast_QHttpHeader(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QHttpHeader)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHttpHeader(void *, int);}
static void release_QHttpHeader(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHttpHeader *>(sipCppV);
    else
        delete reinterpret_cast<QHttpHeader *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QHttpHeader(sipSimpleWrapper *);}
static void dealloc_QHttpHeader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQHttpHeader *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QHttpHeader(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QHttpHeader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QHttpHeader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHttpHeader *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpHeader();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QHttpHeader * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHttpHeader, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpHeader(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQHttpHeader(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QHttpHeader[] = {
    {SIP_MLNAME_CAST(sipName_addValue), meth_QHttpHeader_addValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_allValues), meth_QHttpHeader_allValues, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_contentLength), meth_QHttpHeader_contentLength, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_contentType), meth_QHttpHeader_contentType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasContentLength), meth_QHttpHeader_hasContentLength, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasContentType), meth_QHttpHeader_hasContentType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_hasKey), meth_QHttpHeader_hasKey, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QHttpHeader_isValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_keys), meth_QHttpHeader_keys, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_majorVersion), meth_QHttpHeader_majorVersion, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_minorVersion), meth_QHttpHeader_minorVersion, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parse), meth_QHttpHeader_parse, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_parseLine), meth_QHttpHeader_parseLine, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeAllValues), meth_QHttpHeader_removeAllValues, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_removeValue), meth_QHttpHeader_removeValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setContentLength), meth_QHttpHeader_setContentLength, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setContentType), meth_QHttpHeader_setContentType, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setValid), meth_QHttpHeader_setValid, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setValue), meth_QHttpHeader_setValue, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setValues), meth_QHttpHeader_setValues, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toString), meth_QHttpHeader_toString, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_value), meth_QHttpHeader_value, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_values), meth_QHttpHeader_values, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QHttpHeader = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QHttpHeader,
        {0}
    },
    {
        sipNameNr_QHttpHeader,
        {0, 0, 1},
        23, methods_QHttpHeader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QHttpHeader,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QHttpHeader,
    0,
    0,
    0,
    release_QHttpHeader,
    cast_QHttpHeader,
    0,
    0,
    0
},
    0,
    0,
    0
};